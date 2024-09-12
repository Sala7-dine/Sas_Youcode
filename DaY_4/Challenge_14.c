#include <stdio.h>

int main(){

    int Taille  , nv , n  , somme = 0;

    printf("Merci de Saisir le nombre d'element : ");
    scanf("%d" , &Taille);

    int T[Taille];

    for(int i=0;i<Taille;i++){
        printf("T[%d] = " , i+1);
        scanf("%d" , &T[i]);
        somme += T[i]; 
    } 


    printf("les element de Tableux est : \n");
    for(int i=0;i<Taille;i++){
        printf("%d\n" , T[i]);
    }

    float moyenne = (float)(somme / (Taille)) ;

    printf("les element de Tableux est : %.2f" , moyenne);
     
    return 0;
}