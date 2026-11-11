#include <stdio.h>
#include <math.h>

int factional(int deg)
{
    int i = 1, result = 1;
    for(i = 1; i<=deg ; i++)
    {
        result *= i;
    }
    return result;
}

double exp_taylor(int deg, double x)
{
    double expx = 0.0;
    int i = 0;
    for (i = 0; i<=deg; i++)
    {
        expx += pow(x, i)/factional(i);   
    }
    return expx;
}

int main()
{
    int deg = 0; 
    double x = 0.5, expx = 0.0, error = 0.0;

    printf("degree, taylor,   error\n");
    for(deg = 0; deg >= 0; deg++)
    {
        expx = exp_taylor(deg, x);
        error = fabs(expx - exp(x));
        printf("%d,     %.6f,  %.6f\n", deg, expx, error);
        
        if (error <= 0.0001)
        {
            break;
        }
    }
    return 0;
}

