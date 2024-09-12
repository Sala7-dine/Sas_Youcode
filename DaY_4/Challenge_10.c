#include <stdio.h>

int main(){

    int Taille , nombre;

    printf("Merci de Saisir le nombre d'element : ");
    scanf("%d" , &Taille);

    int T[Taille];

    for(int i=0;i<Taille;i++){
        printf("T[%d] = " , i+1);
        scanf("%d" , &T[i]);
    }

    
    printf("element qui voulez-vous chercher : ");
    scanf("%d" , &nombre);


    int exist = 0; 
    for(int i = 0 ; i<Taille ; i++){
        if (T[i] == nombre) exist = 1;
    }

    if(exist) printf("le Nombre %d est present dans le tableaux\n" , nombre);
    else printf("Le Nombre ne present pas dans Le Tableaux \n");

    return 0;
}