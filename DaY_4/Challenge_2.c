#include <stdio.h>


int main(){

    int Taille;

    printf("Merci de Saisir le nombre d'element : ");
    scanf("%d" , &Taille);

    int T[Taille];

    for(int i=0;i<Taille;i++){
        printf("T[%d] = " , i+1);
        scanf("%d" , &T[i]);
    }

    for(int i=0;i<Taille;i++){
        printf("%d " , T[i]);
    }

    return 0;




}