#include <stdio.h>
#include <math.h>

int main()
{
    int nb1;
    int nb2;
    int somme;
    int soust;
    int mul;
    float division;
    
    printf("Bonjour !\n");
    printf("Veillez saisir le premier nombre :");
    scanf("%d", &nb1);
    printf("Veillez saisir le deuxième nombre :");
    scanf("%d", &nb2);
    printf("Calculs \n");
    somme = nb1+nb2;
    soust = nb1-nb2;
    mul = nb1*nb2;
    division = nb1/nb2;

    printf("%d + %d = %d \n", nb1, nb2, somme);
    printf("%d - %d = %d \n", nb1, nb2, soust);
    printf("%d * %d = %d \n", nb1, nb2, mul);
    printf("%d / %d = %.3lf \n", nb1, nb2, division);
    printf("Au revoir !\n");
    return 0;
}
