#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    int array[10];
    int* ptr;
    
    printf("Number of Data? ");
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }
    
    ptr = malloc(sizeof(int)*num);
    if(ptr==NULL)
    {
    
        printf("memory allocation error\n");
        return 1;
    }
    for(i=0;i<num;i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    for(i=0;i<num;i++)
    {
        printf("%d %d\n",array[i],ptr[i]);
    }
    
    printf("\n--- memory usage ---\n");
    printf("array : %d [bytes]\n", (int)sizeof(array));
    printf("malloc: %d [bytes]\n", num*(int)sizeof(int));
    
    free(ptr);
    return 0;
}