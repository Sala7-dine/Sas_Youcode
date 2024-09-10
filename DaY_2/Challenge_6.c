/*
    Challenge 6 : Positif, Négatif ou Nul
    Écrivez un programme pour vérifier si le nombre donné est positif, négatif ou nul. 
    Si le nombre est inférieur à zéro, alors le nombre est négatif et si le nombre est supérieur 
    à zéro, alors le nombre est positif. Si les deux conditions sont fausses, le nombre est égal 
    à zéro.

*/

#include <stdio.h>


int main(){

    int nombre ;

    printf("Saisir un Nombre : ");
    scanf("%d" , &nombre);


    if(nombre > 0) printf("Le Nombre %d est Positive" , nombre);
    else if(nombre < 0) printf("Le Nombre %d estt Negative" , nombre);
    else printf("Le Nombre Null");

    return 0;

}