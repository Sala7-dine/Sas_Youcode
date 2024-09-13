#include <stdio.h>


int Paire_Impaire(int a){

    if(a % 2 == 0)
        return 1;
    else 
        return 0;

}

int main(){

    int a ;

    printf("Merci de Saisir un nombre : ");
    scanf("%d" , &a);


    int result = Paire_Impaire(a);

    if(result)
        printf("Le Nombre %d est Paire" , a);
    else   
        printf("Le Nombre %d est Impaire" ,a); 

}