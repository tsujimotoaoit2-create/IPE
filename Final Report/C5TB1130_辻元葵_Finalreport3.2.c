#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

    int n = 0, k, i, count_v = 0, count_l = 0, count_s = 0;
    int *r = NULL, *v = NULL, *l = NULL, *s = NULL;
    char t[32];

    printf("何人とじゃんけんしますか？：\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("無効な人数です。正の整数を入力してください。\n");
        return 1;
    }

    /* 配列を動的確保してゼロ初期化 */
    r = malloc(sizeof(int) * n);
    v = calloc(n, sizeof(int));
    l = calloc(n, sizeof(int));
    s = calloc(n, sizeof(int));
    if (!r || !v || !l || !s) {
        perror("メモリ確保に失敗しました");
        free(r); free(v); free(l); free(s);
        return 1;
    }

    printf("どの手を出しますか？ (グー, チョキ, パー): ");
    if (scanf("%31s", t) != 1) {
        printf("入力エラーです。\n");
        return 1;
    }

    if (strcmp(t, "グー") == 0) {
        printf("あなたはグーを出しました。\n");
        k = 0;
    } else if (strcmp(t, "チョキ") == 0) {
        printf("あなたはチョキを出しました。\n");
        k = 1;
    } else if (strcmp(t, "パー") == 0) {
        printf("あなたはパーを出しました。\n");
        k = 2;
    } else {
        printf("無効な入力です。\n");
        return 1;
    }
    
    srand((unsigned int)time(NULL));
    for (i = 0; i < n; i++)
    {
        r[i] = rand() % 3;
    }

    /* CPU の手を表示 */
    const char *cpu_hand[] = {"グー", "チョキ", "パー"};
    for (i = 0; i < n; i++)
    {
        printf("コンピュータ%dは %s を出しました。\n", i+1, cpu_hand[r[i]]);
    }
    for(i = 0; i < n; i++)
    {
        if (k == r[i]){
            count_s++;
            s[i] = 1;
        }
        else if ((k == 0 && r[i] == 1) || (k == 1 && r[i] == 2) || (k == 2 && r[i] == 0)){
            count_v++;
            v[i] = 1;
        }
        else{
            count_l++;
            l[i] = 1;
        }
    }
    if(count_s == n){
        printf("全員と引き分けです。\n");
    }
    else if(count_s == 0 && count_l == 0){
        printf("全員に勝ちました。\n");
    }
    else if(count_s == 0 && count_v == 0){
        printf("全員に負けました。\n");
    }
    else if(count_v > 0 && count_l > 0){
        printf("勝ちと負けが混在しています。\n");
    }
    else if(count_v > 0 && count_s > 0 && count_l == 0){
        for(i = 0; i < n; i++){
            if(v[i] == 1){
                printf("コンピュータ%dに勝ちました。\n", i+1);
            }
            else if (s[i] == 1){
                printf("コンピュータ%dと引き分けました。\n", i+1);
            }

        }
    }
    else if(count_l > 0 && count_s > 0){
        for(i = 0; i < n; i++){
            if(l[i] == 1){
                printf("コンピュータ%dに負けました。\n", i+1);
            }
            else if (s[i] == 1){
                printf("コンピュータ%dと引き分けました。\n", i+1);
            }
        }
    }
    return 0;
}