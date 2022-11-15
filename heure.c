#include <stdio.h>
#include <math.h>

int main()
{
    int heure;
    
    printf("Quelle heure :");
    scanf("%d", &heure);
    if((heure >= 7) && (heure <=11))
    {
        printf("%d heure est le matin", heure);
    }
    else if ((heure >= 12) && (heure <=17))
    {
        printf("%d heure est l'après-midi", heure);
    }
    
    if((heure >= 18) && (heure <=23))
    {
        printf("%d heure est le Soir", heure);
    }
    else if ((heure >= 24) && (heure <=6))
    {
        printf("%d heure est la nuit", heure);
    }
 
    return 0;
}
