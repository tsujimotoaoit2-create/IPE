#include <stdio.h>

struct size {
    char name[100];
    float height;
    float weight;
};
int main()
{
    struct size person[3];
    int i, k;
    for (i = 0; i<=2; i++)
    {
        printf("name? ");
        scanf("%s",person[i].name);
        printf("height? ");
        scanf("%f",&person[i].height);
        printf("weight? ");
        scanf("%f",&person[i].weight);
    }
    printf("name height weight\n");
    for (k = 0; k<=2; k++)
    {
        printf("%s  %.1f  %.1f\n", person[k].name, person[k].height, person[k].weight);
    }
    return 0;
}