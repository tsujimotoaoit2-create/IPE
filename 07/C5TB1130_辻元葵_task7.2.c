#include <stdio.h>

int Fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n ==1)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

int main()
{
    int num, result;
    scanf("%d", &num);
    result = Fibonacci(num);
    printf("F(%d) = %d\n", num, result);
    return 0;
}


