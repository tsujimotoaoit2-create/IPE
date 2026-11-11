#include <stdio.h>
int main()
{
    int memsz;
    memsz = sizeof(char);
    printf("char : %d\n", memsz);
    memsz = sizeof(short);
    printf("short : %d\n", memsz);
    memsz = sizeof(int);
    printf("int : %d\n", memsz);
    memsz = sizeof(float);
    printf("float : %d\n", memsz);
    memsz = sizeof(double);
    printf("double: %d\n", memsz);
    memsz = sizeof(int*);
    printf("int* : %d\n", memsz);
    memsz = sizeof(char*);
    printf("char* : %d\n", memsz);
    return 0;
}