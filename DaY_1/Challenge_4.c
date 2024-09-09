/*
Challenge 4 : Conversion de la vitesse
Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et 
la transforme en mètres par seconde (m/s). Formule :
m/s = km/h * 0.27778
*/
#include <stdio.h>

int main(){

    float vitesse_h , vitesse_s ;

    printf("Veuillez Saisir La vittesse en K/h : ");
    scanf("%f" , &vitesse_h);

    vitesse_s = vitesse_h * 0.27778 ;

    printf("%.2f k/h = %.2f m/s", vitesse_h , vitesse_s);

    return 0;


}
