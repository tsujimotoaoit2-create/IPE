#include <stdio.h>

int main()
{
    int array[5] = {0,1,2,3,4};
    int *p;
    int i;
    p = array;
    for(i=0;i<5;i++)
    {
        printf("i:%d\n", i);
        printf("pを用いての表記〜&array[i]:%d array[i]:%d\n", p[i],*(p+i));
    }
    return 0;
}