#include <stdio.h>
/*構造体 size の定義 */
struct size {
char name[100];
float height;
float weight;
};
int main()
{
    struct size person; /* 構造体 size 型の変数 */
/* データ入力 */
    printf("name? ");
    scanf("%s",person.name);
    printf("height? ");
    scanf("%f",&person.height);
    printf("weight? ");
    scanf("%f",&person.weight);
/* データ表示 */
    printf("name: %s\n",person.name);
    printf("height: %.1f\n",person.height);
    printf("weight: %.1f\n",person.weight);
    return 0;
}