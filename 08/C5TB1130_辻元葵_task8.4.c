#include <stdio.h>

struct complex
{
    int real;
    int imag;
};

struct result
{
    int resultreal;
    int resultimag;
};

struct result mul(struct complex a, struct complex b)
{
    struct result r;

    r.resultreal = (a.real * b.real) - (a.imag * b.imag);
    r.resultimag = (a.real * b.imag) + (a.imag * b.real);

    return r;
}

int main()
{
    struct complex a;
    struct complex b;
    
    scanf("%d %d", &a.real, &a.imag);
    scanf("%d %d", &b.real, &b.imag);

    struct result r = mul(a, b);
    printf("%d + %di\n", r.resultreal, r.resultimag);
    
    return 0;
}