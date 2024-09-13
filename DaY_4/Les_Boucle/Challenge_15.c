#include <stdio.h>

int main(){

    int i , n , factorielle = 1;

    printf("Veuillez Saisir Un Nombre : ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        factorielle *= i;
    }

    printf("La Factoriele de %d est %d" , n ,factorielle);

}