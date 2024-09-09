/*
    Challenge 8 : Calcul de la moyenne géométrique
    Écrivez un programme en C pour trouver la moyenne géométrique 
    de trois nombres saisis par l'utilisateur. Formule :

    Moyenne géométrique = (a * b * c)^(1/3)
*/

#include <stdio.h>
#include <math.h>


int main(){

    int nombre1 , nombre2 , nombre3 , pr1 = 1 , pr2 = 2 , pr3 = 3;
    float moyenne_geom;

    printf("Merci de Saisir Le Nombre 1 : ");
    scanf("%d" , &nombre1);

    printf("Merci de Saisir Le Nombre 2 : ");
    scanf("%d" , &nombre2);

    printf("Merci de Saisir Le Nombre 3 : ");
    scanf("%d" , &nombre3);

    moyenne_geom = pow((nombre1 * nombre2 * nombre3 ),(1/3));

    printf("Le moyenne geometrique est : %.2f" , moyenne_geom);

    return 0;
}