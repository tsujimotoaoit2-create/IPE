#include <stdio.h>

int main()
{
    int i;
    int k;
    for(i=1,k=0; i<=100; i++ )
    {
        k=i+k;
    }
    printf("%d\n",k);
    return 0;
}