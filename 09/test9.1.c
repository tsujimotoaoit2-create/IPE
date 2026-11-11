#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int i, *ip;
    ip = &i;
    i = 123; printf("i = %d\n", i);
    *ip = 45; printf("i = %d\n", i);
    return 0;
}*/

int main()
{
    int *ip;
    int a[5], *pa;
    ip = (int *)malloc(sizeof(int));
    *ip =1;
    pa = &a[0];
    return 0;
}


