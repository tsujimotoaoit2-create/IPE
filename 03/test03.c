#include <stdio.h>

int main(void)
{
    int i;
    int j;
    for(i=0,j=1;j<=10;j++)
    {
        i = j+i;
    }
    printf("%d\n",i);
    return 0;
}