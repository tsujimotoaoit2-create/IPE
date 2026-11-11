#include <stdio.h>

int Collatz(int n)
{   
    int i = 0;
    int k;
    if (n==1)
    {
        return n;
    }
    else if(n%2 == 0)
    {
        i = n/2;
        k = Collatz(i);
        printf("%d\n", k);
        return k;
    }   
    else
    {
        i = 3*n + 1;
        k = Collatz(i);
        printf("%d\n", k);
        return k;
    }
    return 0;
}

int main()
{
    int num, result;
    scanf("%d", &num);
    result = Collatz(num);
    if (result == 1)
    {
        printf("%d fits Collatz conjecture.\n", num);
        return 0;
    }
    else if (result != 1)
    {
        printf("%d doesn't fit Collatz conjecture.\n", num);
        return 0;
    }
}