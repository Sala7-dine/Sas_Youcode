/*
    Structure et Fonction qui Modifie la Structure
    Écrivez un programme C qui définit une structure pour représenter un compte bancaire avec les champs nom et solde.

    Écrivez une fonction qui ajoute un montant au solde du compte et modifie la structure.

*/

#include <stdio.h>


typedef struct 
{
    char *nom;
    float sold;

}Compte;

void Modifier(Compte *ce){

    float montant = 200;

    ce->nom = "salahdine";
    ce->sold += montant;

    printf("Le sold a ete Modifer avec succes.\nNom : %s\nSold : %.2f" ,ce->nom ,ce->sold);


}


int main(){

    Compte *ce;
    ce->sold = 50;

    Modifier(ce);

}