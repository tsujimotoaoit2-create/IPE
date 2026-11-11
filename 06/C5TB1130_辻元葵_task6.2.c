#include <stdio.h>

int multiple(int x, int y, int z)
{
    int w = x*y*z;
    return w;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    d = multiple(a, b, c);
    printf("%d\n", d);
    return 0;
}