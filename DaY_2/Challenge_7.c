/*
    Challenge 7 : Alphabet Majuscule
    Écrivez un programme pour vérifier si le caractère donné est un alphabet majuscule 
    ou non en utilisant l'instruction conditionnelle if-else. Les lettres majuscules vont 
    de 'A' à 'Z'. Les valeurs ASCII de 'A' et 'Z' sont respectivement 65 et 90. Si la valeur 
    ASCII d'un caractère est comprise entre 65 et 90, il s'agit d'un alphabet majuscule.

*/



#include <stdio.h>


int main(){

    char ch ;

    printf("Merci de Saisir un charactere : ");
    scanf("%c" , &ch);

    if(ch >= 65 && ch <= 90)
        printf("Le Charactere est Majuscules");
    else if(ch >= 97 && ch <= 122)
        printf("Le charactere est Miniscule");

    return 0;
    

}