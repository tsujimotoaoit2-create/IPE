#include <stdio.h>

int main()
{
    char a[100];
    char b[100];
    int i;

    scanf("%s", a);

    for(i=0 ;i<=99 ;i++)
    {
        
        b[i]=a[i];
    
    }
    printf("%s\n", b);
    return 0;
}