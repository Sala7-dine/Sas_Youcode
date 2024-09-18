/*
    Écrivez un programme C qui définit une structure pour représenter un cercle avec le champ rayon. 
    Écrivez une fonction qui calcule l'aire du cercle à partir de la structure et affiche l'aire.
*/

#include <stdio.h> 

#define PI 3.14

typedef struct {
    float rayon;
}Cercle;

float Aire_Cercle(Cercle c){

    float aire = PI * c.rayon*c.rayon;

    return aire;

}

int main(){

    Cercle cr ;
    cr.rayon = 4;

    float aire = Aire_Cercle(cr);

    printf("L'aire de Cercle : %.2f" , aire);

}
