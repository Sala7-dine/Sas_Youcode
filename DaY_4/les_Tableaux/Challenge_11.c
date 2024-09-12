#include <stdio.h>

int main(){

    int Taille  , nv , n;

    printf("Merci de Saisir le nombre d'element : ");
    scanf("%d" , &Taille);

    int T[Taille];

    for(int i=0;i<Taille;i++){
        printf("T[%d] = " , i+1);
        scanf("%d" , &T[i]);
    } 

    printf("entrer la l'occurance : ");
    scanf("%d" , &n);

    printf("entrer valeur a remplacer : ");
    scanf("%d" , &nv);

    for (int i = 0; i < Taille; i++) {
        if(T[i] == n) {
            T[i] = nv;
        }
    }

    for(int i=0;i<Taille;i++){
        printf("%d\n" , T[i]);
    }

    return 0;
}