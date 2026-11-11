#include <stdio.h>

int main()
{
    int i , j;
    int a[3][3] = {
        {1,0,1},
        {0,1,1},
        {1,0,1}
    };
    int b[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for (i = 0; i<=2; i++)
    {
        for(j = 0; j<=2; j++)
        {
            a[i][j] = a[i][j] + b[i][j];
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}