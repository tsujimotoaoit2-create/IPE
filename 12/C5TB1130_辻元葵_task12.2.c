#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("sample.txt","w");
    if(fp==NULL)
    {
        printf("can’t open file\n");
        return 1;
    }
    else
    {
        printf("success\n");
    }
    fprintf(fp, "hello");
    fclose(fp);
    return 0;
}