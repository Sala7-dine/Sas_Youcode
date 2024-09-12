#include <stdio.h>


int main(){

    int Taille , min;

    printf("Merci de Saisir le nombre d'element : ");
    scanf("%d" , &Taille);

    int T[Taille];

    for(int i=0;i<Taille;i++){
        printf("T[%d] = " , i+1);
        scanf("%d" , &T[i]);
    }

    min = T[0];
    for(int i=0;i<Taille;i++){
        if(min > T[i])
            min = T[i];
    }

    printf("Le plus petit de Tableaux est : %d" , min);
    return 0;

}