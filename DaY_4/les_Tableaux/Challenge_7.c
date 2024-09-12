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

    printf("avant le Trie : \n");
    for(int i = 0 ; i<Taille ; i++){
            printf("%d\n" , T[i]);
    }

    for(int i=0;i<Taille;i++){
        for(int j=i+1;j<Taille;j++){
            if(T[i] > T[j]){
                int temp = T[j];
                T[j] = T[i];
                T[i] = temp;
            }
        }
    }

    printf("apres le Trie : \n");
    for(int i = 0 ; i<Taille ; i++){
        printf("%d\n" , T[i]);
    }

    return 0;
}