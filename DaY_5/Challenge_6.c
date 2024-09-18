/*
    Écrivez un programme C qui définit une structure pour représenter un produit avec les champs nom, prix, 
    et quantité. Créez un tableau de plusieurs produits, assignez des valeurs aux champs, puis affichez 
    les informations de chaque produit.
*/

#include <stdio.h>

typedef struct 
{
    char nom[20];
    float prix;
    int qte;

}Produit;


int main(){

    Produit T[3] = {
        {"prod1" , 321 , 10},
        {"prod2" , 354 , 20},
        {"prod3" , 544 , 5}
    }; 

    for(int i=0;i<3;i++){

        printf("\n --------------- \n");
        printf("Nom : %s\nprix: %.2f dh\nQuantite : %d", T[i].nom , T[i].prix , T[i].qte);
        
    }


}