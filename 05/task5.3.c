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
    int c[3][3];

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            c[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j];
            printf("%3d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}