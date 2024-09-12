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

    printf("Les Nombre Impaire de Tableaux est : \n");

    for(int i=0;i<Taille;i++){
        if(T[i] % 2 != 0) printf("%d\n" , T[i]);
    }

    return 0;
}