#include <stdio.h>
#include <math.h>

#define kizami (6)
#define pi (3.1416)

int main()
{
    float x, sinx, cosx, route;
    int i, kakudo;
    
    printf("do : sin(x) cos(x) (sin(x)^2, cos(x)^2)^1/2\n");
    
    for(i = 0; i <= kizami; ++i)
    {
        kakudo = (180. / kizami) * i;
        printf("%3d:", kakudo);
        x = kakudo / 180. * pi;
        
        sinx = sin(x); 
        cosx = cos(x);

        route = sqrt(pow(sinx, 2)+pow(cosx, 2));
        
        printf("%7.4f %7.4f    %7.4f\n", sinx, cosx, route);
    }
}