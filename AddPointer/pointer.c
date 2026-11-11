#include <stdio.h>

int pointer(void)
{
    //char型は１文字しか格納できない・複数文字の格納はポインタ//
    char str1[] = "BANANA";
    char *str2 = "MILK";

    printf("%s\n", str1);//str1 = [7]//
    printf("%s\n", str2);//str2 = アドレス//
    return 0;
}

int double_pointer(void)
{
    int x = 10;
    int *p;
    p =&x;

    int **pp;
    pp = &p;//ポインタのポインタ（アドレス）を表す//

    printf("ポインタpのアドレス,%d\n", &p);
    printf("ppの値,%d\n", pp);

    return 0;
}

typedef int (*calc)(int a, int b);

int add (int a ,int b)
{
    return a + b;
}

int sub (int a, int b)
{
    return a - b;
}

int main(void)
{
    pointer();
    double_pointer();
    return 0;

    int a, b ,result;
    calc p;
    a = 5;
    b = 2;

    p = &add;
    result = p(a, b);
    printf("a + b = %d\n", result);

    p = &sub;
    result = p(a, b);
    printf("a - b = %d\n", result);

    return 0;
}