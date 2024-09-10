/*
    Challenge 9 : Vérification d'Alphabet
    Écrivez un programme C qui lit un caractère et détermine s'il fait partie des alphabets ou 
    non. Et s'il l'est, dire en plus s’il est une minuscule ou une majuscule.

*/
#include <stdio.h>

int main(){

    char ch ;

    printf("Merci de Saisir un charactere : ");
    scanf("%c" , &ch);

    if(ch >= 65 && ch <= 122){

        if(ch >= 65 && ch <= 90)
            printf("Le Charactere est Majuscules");
        else if(ch >= 97 && ch <= 122)
            printf("Le charactere est Miniscule");

    }else{

        printf("Le Charactere n'pas un Alphabet");
    }
    

    return 0;
    

}