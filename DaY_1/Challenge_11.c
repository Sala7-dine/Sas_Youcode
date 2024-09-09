/*
    Challenge 11 : Surface d'un rectangle
    Écrivez un programme pour trouver la surface d'un rectangle. 
    Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur. 
    Formule pour la surface d'un rectangle :

    Surface = longueur * largeur

*/

#include <stdio.h>

int main(){

    float largeur , longeur , surface;

    printf("Veuillez Saisir La Largeur de rectangle : ");
    scanf("%f" , &largeur);

    printf("Veuillez Saisir La Longeur de rectangle : ");
    scanf("%f" , &longeur);

    surface = longeur * largeur ; 

    printf("La Surface de Rectangle est : %.2f : " , surface);

    return 0;
}