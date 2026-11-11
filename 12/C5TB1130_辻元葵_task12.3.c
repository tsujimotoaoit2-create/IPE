#include <stdio.h>

int main()
{
    FILE *kfp;
    char c;
    int n;
    int i;
    int count[10] = {0,0,0,0,0,0,0,0,0,0};

    kfp = fopen("pi.txt","r");
    while((c = fgetc(kfp)) != EOF)
    {
        n = c - '0';
        count[n]++;
    }

    fclose(kfp);

    for(i = 0; i < 10; i++)
    {
        printf("Number %d: %d times\n", i, count[i]);
    }
    return 0;
}