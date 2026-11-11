#include<stdio.h>

union unitest
{
    int i1;
    int i2;
    short s[2];
};

int main()
{
    union unitest u;
    int n = 0;
    
    for (n = 0; n>=0; n++)
    {
        u.i1 = n;
        printf("%d %d\n", u.i2, u.s[0]);
        if (u.i2 != u.s[0])
        {
            printf("Different values found at n = %d\n", n);
            break;
        }
    }
    return 0;
}