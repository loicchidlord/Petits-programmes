#include <stdio.h>
#include <math.h>

int main()
{
    float reel;
    float deci;
    
    printf("Saisir un nombre réel :");
    scanf("%g", &reel);
    printf("La partie entière de %g est %.lf \n",reel, floor(reel));
 
    return 0;
}
