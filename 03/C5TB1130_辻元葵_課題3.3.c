#include <stdio.h>

int main()
{
    int N = 11;
    int i = 2;

    while(i<N)
    {
        if(N%i==0)
        {
            printf("%d is not a prime number\n",N);
            break;
        }
        i++;
    }
    if(i==N)
    {
        printf("%d is a prime number\n",N);
    }
    return 0;
}