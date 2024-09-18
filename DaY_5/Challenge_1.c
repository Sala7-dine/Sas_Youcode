/*
   Écrivez un programme C qui définit une structure pour représenter une personne avec les champs nom, prenom, 
   et age. Créez une variable de cette structure, assignez des valeurs aux champs, et affichez ces valeurs. 

*/

#include <stdio.h>


typedef struct 
{
    char nom[20];
    char prenom[20];
    int age;

}Personne;

int main(){
    
    Personne prs1 = {"daha" , "salahdine" , 24};

    printf("Nom : %s\nPrenom : %s\nAge : %d" , prs1.nom , prs1.prenom , prs1.age);

    return 0;
}
