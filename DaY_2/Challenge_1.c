/*
    Challenge 1 : Paire ou Impaire
    Écrivez un programme qui demande un nombre et 
    affiche si ce nombre est pair ou impair.

*/

#include <stdio.h>

int main(){

    int n; 

    printf("Merci de Saisir un Nombre :");
    scanf("%d" , &n);


    if(n%2==0) printf("Le Nombre %d est Paire.");
    else printf("Le Nombre %d est Impaire.");

    return 0;

}