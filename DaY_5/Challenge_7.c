/*
    Écrivez un programme C qui définit une structure pour représenter une date avec les champs 
    jour, mois, et année. Utilisez un pointeur pour créer une variable de cette structure, 
    assignez des valeurs aux champs via le pointeur, puis affichez les valeurs.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int jour;
    int mois;
    int annee;

}date;


int main(){


    date *dt1 = malloc(sizeof(date));
    dt1->jour = 20;
    dt1->mois = 07;
    dt1->annee = 2020;

    printf("%d/%d/%d" , dt1->jour , dt1->mois , dt1->annee); 

}
