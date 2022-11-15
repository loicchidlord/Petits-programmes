#include <stdio.h>
#include <math.h>

int main()
{
        //Déclaration des variables
        int n;
        int i;
        int f=1;
        printf("CALCUL DE FACTORIEL (n!) \n");
        printf("Saisir la valeur de n : ");
        scanf("%d", &n);
        
        //Début de la boucle pour vérifier si la valeur de n est bien positive
        while (n<=0)
        {
            printf("La valeur de n est négative !! \n");
            printf("Saisir à nouveau la valeur de n : ");
            scanf("%d", &n);
        }
        //Fin de la boucle
        
        for (i = 1; i <= n; i++)
        f = f * i;
        printf(" %d! = %d\n", n, f);
        return 0;
}
