#include <stdio.h>
#include <math.h>

int main()
{
        //Déclaration des variables
        int x;
        int n;
        printf("Saisir la valeur de X : ");
        scanf("%d", &x);
        
        //Début de la boucle pour vérifier si la valeur de X est bien positive
        while (x<=0)
        {
            printf("La valeur de X est négative !! \n");
            printf("Saisir à nouveau la valeur de X : ");
            scanf("%d", &x);
        }
        //Fin de la boucle
        
        printf("Saisir la valeur de n : ");
        scanf("%d", &n);
        printf("%d Exposant %d = %f\n", x, n, pow (x, n));
        return 0;
}
