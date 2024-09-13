#include <stdio.h>

int main(){

    int i , j , Taille , tmp;

    printf("Veuillez Saisir La Taille : ");
    scanf("%d" ,&Taille);

    int T[Taille];

    for ( i = 0; i < Taille; i++)
    {
        printf("T[%d] = " , i+1);
        scanf("%d" , &T[i]);
    }
    

    for(i=0;i<Taille;i++){

        for (int j = 0; j < Taille; j++)
        {
            if(T[i] < T[j])
            {
                tmp = T[i];
                T[i] = T[j];
                T[j] = tmp;
            }   
        }
    }

    for(i=0;i<Taille;i++){
        printf("%d " , T[i]);
    } 


}