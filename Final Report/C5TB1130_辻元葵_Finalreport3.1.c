#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int r, k;
    char t[32];

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
    r = rand() % 3;

    /* CPU の手を表示 */
    const char *cpu_hand[] = {"グー", "チョキ", "パー"};
    printf("コンピュータは %s を出しました。\n", cpu_hand[r]);

    if (k == r){
        printf("引き分けです。\n");
    }
    else if ((k == 0 && r == 1) || (k == 1 && r == 2) || (k == 2 && r == 0)){
        printf("あなたの勝ちです。\n");
    }
    else{
        printf("あなたの負けです。\n");
    }
    return 0;
}