#include <stdio.h>

int main()
{
    int i=5;

    if(i<0)
    {
        i=-i;
    }
    printf("%d\n",i);
    return 0;
}