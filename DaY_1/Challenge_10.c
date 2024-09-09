/*
    Challenge 10 : Volume d'une sphère
    Écrivez un programme pour trouver le volume d'une sphère. Prenez le rayon de la sphère en entrée de 
    l'utilisateur. Formule pour le volume d'une sphère :

    Volume = (4/3) * π * r³
*/

#define M_Pi 3.14

#include <stdio.h>
#include <math.h>

int main(){

    float volume , r ;

    printf("Merci de Saisir Le rayon de Sphere : ");
    scanf("%f" , &r);

    volume = (4/3) * M_Pi * pow(r , 3);

    printf("Le resultat est : %.2f " , volume);
    return 0;

}