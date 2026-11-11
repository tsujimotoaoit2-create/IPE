#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_WIDTH 50
#define MAX_HEIGHT 50

typedef struct {
    int width;      // 盤面の幅
    int height;     // 盤面の高さ
    int generation; // 現在の世代数
    int max_gen;    // 最大の世代数
    int cells[MAX_HEIGHT][MAX_WIDTH]; // セルの状態（0:死, 1:生）
} LifeGame;

// 指定位置の周囲の生セル数を数える
int countNeighbors(const LifeGame *game, int y, int x) {
    int count = 0;
    int dy, dx, ny, nx;
    for (dy = -1; dy <= 1; dy++) {
        for (dx = -1; dx <= 1; dx++) {
            if (dy == 0 && dx == 0) continue; // 自分自身はカウントしない
            ny = y + dy;
            nx = x + dx;
            if (ny >= 0 && ny < game->height && nx >= 0 && nx < game->width) {
                count += game->cells[ny][nx];
            }
        }
    }
    return count;
}

// 構造体LifeGameを次世代へ更新
void nextGeneration(LifeGame *game) {
    // 次の世代の状態の計算結果を一時的に格納する配列
    int nextCells[MAX_HEIGHT][MAX_WIDTH];
    int i, j, neighbors;
    for(i = 0; i< game->height; i++)
    {
        for(j = 0; j < game->width; j++)
        {
            neighbors = countNeighbors(game, i, j);
            if(game->cells[i][j] == 1) // 現在のセルが生きている場合
            {
                if(neighbors < 2 || neighbors > 3)
                {
                    nextCells[i][j] = 0; // 過疎または過密で死ぬ
                }
                else
                {
                    nextCells[i][j] = 1; // 生き続ける
                }
            }
            else // 現在のセルが死んでいる場合
            {
                if(neighbors == 3)
                {
                    nextCells[i][j] = 1; // 誕生
                }
                else
                {
                    nextCells[i][j] = 0; // 死んだまま
                }
            }
        }
    }

    /* 計算した nextCells を game->cells に反映 */
    for (i = 0; i < game->height; i++) {
        for (j = 0; j < game->width; j++) {
            game->cells[i][j] = nextCells[i][j];
        }
    }

    /* 世代カウントを進める */
    game->generation++;
}


/*                                 */
/*　ここから下は編集する必要がありません */
/*                                 */

// 盤面の初期化
void initGame(LifeGame *game)
{
    int i, j;
    game->width = 0;
    game->height = 0;
    game->generation = 0;
    
    // 全セルを死状態に初期化
    for (i = 0; i < MAX_HEIGHT; i++) 
    {
        for (j = 0; j < MAX_WIDTH; j++) 
        {
            game->cells[i][j] = 0;
        }
    }
}

// 盤面の表示
void printGame(const LifeGame *game) {
    int i, j;
    
    printf("Generation: %d\n", game->generation);
    
    // セルの表示（1または0）
    for (i = 0; i < game->height; i++) {
        for (j = 0; j < game->width; j++) {
            printf("%d", game->cells[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// ファイルから盤面を読み込む
int readGame(LifeGame *game, const char *filename) 
{
    FILE *fp;
    int i, j;
    int width, height, max_gen;
    char c;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 0;
    }
    
    // 最初に盤面のサイズ（高さと幅）を読み込む
    if (fscanf(fp, "%d %d %d", &height, &width, &max_gen) != 3) {
        printf("Error: Cannot read board size and max generation\n");
        fclose(fp);
        return 0;
    }
    
    // サイズチェック
    if (height <= 0 || height > MAX_HEIGHT || width <= 0 || width > MAX_WIDTH) {
        printf("Error: Invalid board size (%d x %d)\n", height, width);
        fclose(fp);
        return 0;
    }
    
    // 盤面サイズを設定
    game->height = height;
    game->width = width;
    game->generation = 0;
    game->max_gen = max_gen;
    
    // ファイルから盤面データを読み込む
    for (i = 0; i < game->height; i++) {
        for (j = 0; j < game->width; j++) {
            c = fgetc(fp);
            
            // 改行やスペースをスキップ
            while (c == '\n' || c == '\r' || c == ' ') {
                c = fgetc(fp);
            }
            
            // ファイル終端チェック
            if (c == EOF) {
                printf("Error: Unexpected end of file\n");
                fclose(fp);
                return 0;
            }
            
            // '0'または'1'を読み込む
            if (c == '0') {
                game->cells[i][j] = 0;
            } else if (c == '1') {
                game->cells[i][j] = 1;
            } else {
                printf("Error: Invalid character '%c' in file\n", c);
                fclose(fp);
                return 0;
            }
        }
    }
    
    fclose(fp);
    return 1;
}

int main(void) {
    LifeGame game;
    int i;
    
    // 盤面を初期化
    initGame(&game);
     
    // 盤面を読み込み
    if(!readGame(&game, "game.txt")) {
		printf("Failed to load game.\n");
        return 1;
    }

    // 初期状態と10世代分を表示
    printGame(&game);
    
    for (i = 0; i < game.max_gen; i++) {
		printf("Press Enter to next generation...");
        getchar();
        nextGeneration(&game);
        printGame(&game);
    }
    
    return 0;
}