/*
    Écrivez un programme C qui définit une structure pour représenter un livre avec les champs 
    titre, auteur, et année. Écrivez une fonction qui retourne une variable de cette structure 
    initialisée avec des valeurs données.

*/

#include <stdio.h>

typedef struct 
{
    char titre[20];
    char auteur[20];
    int annee;

}Livre;

Livre getInfo(){

    Livre live1 = {"Rich dad" , "Mohamed" , 2020};

    return live1;

}


int main(){

    Livre livre = getInfo();

    printf("Titre : %s\nAuteur : %s\nAnnee : %d", livre.titre , livre.auteur  , livre.annee);


}
