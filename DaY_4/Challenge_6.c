#include <stdio.h>


int main(){

    int Taille , fact;

    printf("Merci de Saisir le nombre d'element : ");
    scanf("%d" , &Taille);

    int T[Taille];

    for(int i=0;i<Taille;i++){
        printf("T[%d] = " , i+1);
        scanf("%d" , &T[i]);
    }

    printf("Nombre de Factor : ");
    scanf("%d" , &fact);

    for(int i=0;i<Taille;i++){
        T[i] = T[i] * fact;
    }

    for(int i = 0 ; i<Taille ; i++){

            printf("%d " , T[i]);

    }


    return 0;




}