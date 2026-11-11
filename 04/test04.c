#include <stdio.h>

int main()
{
    int i, order;
    int menu[8];
    for (i = 0; i < 8; i++)
    {
        menu[i] = 0;
    }
    for (i = 1; i <=10 ; i++)
    {
        scanf("%d",&order);
        if (order >= 0 && order < 8)
        {
            menu[order]++;
        }
    }
    for (order = 0; order < 8; order++)
    {
        printf("menu %d: %d\n", order, menu[order]);
    }
    return 0;
}