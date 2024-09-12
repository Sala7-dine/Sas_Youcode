#include <stdio.h>


int main(){

    int Taille , somme = 0;

    printf("Merci de Saisir le nombre d'element : ");
    scanf("%d" , &Taille);

    int T[Taille];

    for(int i=0;i<Taille;i++){
        printf("T[%d] = " , i+1);
        scanf("%d" , &T[i]);
        somme += T[i];
    }

    printf("La Somme des element est : %d" , somme);

    return 0;




}