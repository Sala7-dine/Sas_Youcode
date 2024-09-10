/*
    Challenge 2 : Voyelle ou Non
    Écrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur 
    est une voyelle ou non en utilisant l'instruction switch case.

*/


#include <stdio.h>

int main(){


    char ch;

    printf("Veuillez Saisir un Charactere : ");
    scanf("%c" , &ch);

    switch (ch)
    {
    case 'a' :
        printf("le charactere %c est voyelle.", ch);
        break;
    case 'u' :
        printf("le charactere %c est voyelle.", ch);
        break;
    case 'e' :
        printf("le charactere %c est voyelle.", ch);
        break;
    case 'o' :
        printf("le charactere %c est voyelle.", ch);
        break;
    case 'i' :
        printf("le charactere %c est voyelle.", ch);
        break;
    case 'y' :
        printf("le charactere %c est voyelle.", ch);
        break;
    default:
        printf("Le Charactere %c pas un voyelle", ch);
        break;
    }

}