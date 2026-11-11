#include <stdio.h>

enum week {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main()
{
    int day = 1;
    int i;
    enum week dow = Thu;
    printf( "Sun Mon Tue Wed Thu Fri Sat\n");
    
    for(i=0;i<dow;i++)
    {
        printf("    "); 
    }
    
    for(day=1;day<=31;day++)
    {
        printf("%3d ", day); 
        if(dow==Sat) 
        {
            printf("\n");
            dow=Sun;
        }
        else dow++; 
    }
    return 0;
}