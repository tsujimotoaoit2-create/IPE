#include <stdio.h>
int main()
{
    int i; 
    int *p; 
    i=10;
    p = &i; 
    *p = 20; 
    printf("%d\n",i);
    printf("%p\n",p);
    return 0;
}