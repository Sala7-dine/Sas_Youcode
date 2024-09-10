/*
    Challenge 8 : Mention Obtenue
    Nous désirons afficher la mention obtenue par un élève en fonction de la moyenne de ses notes. 
    S’il a une moyenne strictement inférieure à 10, il est recalé. S’il a une moyenne entre 10 
    (inclus) et 12, il obtient la mention passable. S’il a une moyenne entre 12 (inclus) et 14, 
    il obtient la mention assez bien. S’il a une moyenne entre 14 (inclus) et 16, il obtient la 
    mention bien. S’il a une moyenne supérieure à 16 (inclus) il obtient la mention très bien. 
    Écrire les instructions nécessaires.

*/


#include <stdio.h>


int main(){

    float moyenne ;

    printf("Veuillez Saisir La Moyenne : ");
    scanf("%f"  , &moyenne);

    if(moyenne < 10) printf("Recale");
    else if(moyenne < 12 ) printf("Passable");
    else if(moyenne < 14 ) printf("assez bien");
    else if(moyenne < 16) printf("bien");
    else if(moyenne >= 16 ) printf("Tres Bien");

    return 0;    

}