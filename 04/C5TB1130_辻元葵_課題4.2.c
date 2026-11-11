#include <stdio.h>

int main()
{
    int N[10];
    int i;
    for (i = 0;i < 10; i++)
    {
        scanf("%d", &N[i]);
    }
    printf("５番目に入力された値は %d です\n", N[4]);
    return 0;
}