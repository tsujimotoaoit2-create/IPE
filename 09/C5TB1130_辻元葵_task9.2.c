#include <stdio.h>

void func1(int *p)
{
    *p=*p+1;
    return;
}

int main()
{
    int i=1;
    func1(&i);
    printf("%d\n",i);
    return 0;
}
