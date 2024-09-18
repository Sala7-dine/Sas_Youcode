#include <stdio.h>
#include <stdlib.h>


typedef struct{

    char nom[20];
    float note;

}Etudiant;

void Afficher_Etudiant(Etudiant *etudiant ,int *Taille){

    for(int i=0;i<*Taille;i++){
        printf("\n ---- Etudiant %d ----\n" , i+1);
        printf("\n\t-- Nom : %s\n" , etudiant[i].nom);
        printf("\n\t-- Note : %.2f\n" , etudiant[i].note);
    }

}

void Ajouter_etudiant(Etudiant *etudiant ,int *Taille){

 
    for(int i=0;i<*Taille;i++){

    printf("\nVeuillez Saisir L'etudiant : %d\n" , i+1);
    printf("\t-- Nom : ");
    scanf("%s" , etudiant[i].nom);

    printf("\t-- Note : ");
    scanf("%f" , &etudiant[i].note);
    }

    printf("\n --- L'etudiant a ete ajoute avec succes ---\n");
}


void main(){

    int Taille = 2;
    Etudiant *etudiant = calloc(Taille , sizeof(Etudiant));

    Ajouter_etudiant(etudiant , &Taille);

    Afficher_Etudiant(etudiant , &Taille);

}