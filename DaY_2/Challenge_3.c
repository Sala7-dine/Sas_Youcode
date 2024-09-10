/*
    Challenge 3 : Somme de Deux Valeurs
    Écrivez un programme C pour calculer la somme de deux valeurs entières données. 
    Si les deux valeurs sont identiques, le programme doit renvoyer le triple de leur somme.
*/


#include <stdio.h>

int main(){

    int a , b , triple;
    printf("Merci d'entrer La valeur de A : ");
    scanf("%d" , &a);

    printf("Merci d'entrer La valeur de B : ");
    scanf("%d" , &b);

    if(a==b) printf("Le Triple de a + b est egale %d" , (a+b)*3);
    else printf("a + b = %d" , a+b);

    return 0;
}