#include <stdio.h>

int main()
{
    char ch;

    while(1)
    {
        scanf("%c", &ch);
        printf("%c\n", ch);
        if (ch == 'q')
        { 
            break;
        }
    }
    return 0;
}