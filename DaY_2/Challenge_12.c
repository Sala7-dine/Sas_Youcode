/*
    Challenge 12 : Comparaison d'Instants
    Écrivez un programme C qui lit deux instants dans le format HH:MM:SS et affiche 
    un des messages suivants :

*/


#include <stdio.h>

int main(){


    int HH1 , MM1 , SS1;
    int HH2 , MM2 , SS2;


    printf("Veuillez Saisie La Premier Instante (HH:MM:SS) : ");
    scanf("%d:%d:%d" , &HH1, &MM1 , &SS1);

    printf("Veuillez Saisie La Premier Instante (HH:MM:SS) : ");
    scanf("%d:%d:%d" , &HH2 ,&MM2 , &SS2);


    if(HH1 < 24 && HH2 < 24 && MM1 < 60 && MM2 < 60 && SS1 < 60 && SS2 < 60){
        if( HH1 > HH2 || (HH1 == HH2 && MM1 > MM2) || (HH1 == HH2 && MM1 == MM2 && SS1 > SS2)) printf("Le premier instant vient avant le deuxieme");
        else if( HH1 < HH2 || (HH1 == HH2 && MM1 < MM2) || (HH1 == HH2 && MM1 == MM2 && SS1 < SS2))  printf("Le deuxieme instant vient avant le premier");
        else printf("Il s'agit du meme instant.");
    }else{
        printf("Invalide Instante");
    }

    return 0 ;
     
}