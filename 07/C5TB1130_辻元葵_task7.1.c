#include <stdio.h>

int a_ns(int x)
{
    if (x == 1)
    {
        return 3;
    }
    else
    {
        return a_ns(x-1)*2 + 2;
    }

}

int main()
{
    int a, b;
    scanf("%d", &a);
    b = a_ns(a);
    printf("a(%d) = %d\n",a ,b);
    return 0;
}