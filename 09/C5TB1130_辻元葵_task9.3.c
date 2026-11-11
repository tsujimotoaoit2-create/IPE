#include <stdio.h>

struct st {
    int data1;
    float data2;
};

void func2(struct st *k)
{
    (*k).data1 = 0;
    (*k).data2 = 0.0;
    return;
}

int main()
{
    struct st x;
    func2(&x);
    printf("%d %1.1f\n",x.data1, x.data2 );  
    return 0;
}