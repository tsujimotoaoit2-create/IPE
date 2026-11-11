#include <stdio.h>

int func(int g_var)
{
    printf("%d\n", g_var);
    g_var = g_var+1;
    return g_var;
}

int main()
{
    int g_var;
    scanf("%d", &g_var);
    g_var = func(g_var);
    printf("%d\n", g_var);
    return 0;
}