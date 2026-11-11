#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("sample.txt","r");
    if( fp == NULL)
    {
        printf("can’t open file\n");
        return 1;
    }
    else
    {
        printf("success\n");
    }
    fclose(fp);
    return 0;
}//
//  task12.1.c
//  12X
//
//  Created by 辻元葵 on 2026/01/09.
//

