/*
    Écrivez un programme C qui utilise une structure pour représenter une liste d'employés avec des champs nom et salaire.

Utilisez malloc pour allouer dynamiquement un tableau de structures, assignez des valeurs et affichez les informations des employés.
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct 
{
    char nom[20];
    float salire;

}Employee;


int main(){

    Employee *employes = malloc(2*sizeof(Employee)); 

    for(int i = 0 ; i<2;i++){
        printf("\n\t --- Employes %d ---- \n" , i+1);
        printf("Veuillez Saisir Le Nom : ");
        scanf("%s", employes[i].nom);

        printf("Veuillez Saisir Le Salaire : ");
        scanf("%f", &employes[i].salire);
    }

    for(int i = 0 ; i<2;i++){
        printf("\n\t --- Employes %d ---- \n" , i+1);
        printf("-- Nom : %s\n" , employes[i].nom);

        printf("-- Salaire : %.2f" , employes[i].salire);

    }




}