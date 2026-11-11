#include <stdio.h>

int g_var;

void func(void)
{
    printf("%d\n", g_var);
    g_var = g_var+1;
    return;
}

int main()
{
    scanf("%d", &g_var);
    func();
    printf("%d\n", g_var);
    return 0;
}