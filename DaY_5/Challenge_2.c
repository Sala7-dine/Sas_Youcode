/*
    Écrivez un programme C qui définit une structure pour représenter un étudiant avec les champs 
    nom, prenom, et un tableau d'entiers pour stocker les notes. Assignez des valeurs aux champs et 
    aux notes, puis affichez les informations de l'étudiant.

*/

#include <stdio.h>


typedef struct {
    char nom[20];
    char prenom[20];
    int *T;
}Etudiant;


int main(){

    int T[5] = {12,14,16,13,15};
    Etudiant etud1 = {"daha" , "salah" , T};

    printf("Nom : %s\nPrenom : %s" , etud1.nom , etud1.prenom);

    for (int i = 0; i < 5; i++)
    {
        printf("%d " , etud1.T[i]);
    }
    
}