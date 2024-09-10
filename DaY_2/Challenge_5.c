/*
    Écrivez un programme C piloté par menu pour convertir une année donnée en :
    Mois
    Jours
    Heures
    Minutes
    Secondes
    Pour plus de simplicité, n'incluez pas l'année bissextile (sauf si vous êtes courageux pour le faire). 1 an = 365 jours, 1 mois = 30 jours.

*/
#include <stdio.h>

int main(){

    int annee;

    printf("Merci de Saisir L'annee : ");
    scanf("%d" , &annee);

    printf("%d annee, %d mois, %d jours, %d Heurs, %d Minutes, %d Seconde." , 
    annee, annee*12, annee*365, annee*365*24, annee*365*24*60, annee*365*24*3600);

    return 0;

}
