#include <stdio.h>

int main()
{
    char a[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char b[6] = "hello";

    int i ;
    printf("%s\n", a);
    printf("%s\n", b);

    for (i = 0; i < 6; i++)
    {
        if (a[i] != b[i])
        {
            printf("eroor");
        }
    }
    return 0;
}

