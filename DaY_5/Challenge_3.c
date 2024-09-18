/*
    Écrivez un programme C qui définit une structure pour représenter un rectangle avec les champs longueur 
    et largeur. Écrivez une fonction qui prend une variable de cette structure en argument et calcule l'aire 
    du rectangle. Affichez l'aire dans le programme principal.

*/

#include <stdio.h>

typedef struct 
{
    int longeur;
    int largeur;

}Rectangle;


int main(){

    Rectangle rect = {5 , 10};

    printf("L'aire de rectangle est : %d" , rect.largeur*rect.longeur);


}
