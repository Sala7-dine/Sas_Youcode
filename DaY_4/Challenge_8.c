#include <stdio.h>


int main(){

    int T1[5] = {1,2,3,4,5} , T2[5];

    printf("Le Tableaux originale : \n");
    for(int i=0;i<5;i++){
        printf("%d ", T1[i]);
    }

    for(int i=0;i<5;i++){
        T2[i] = T1[i];
    }

    printf("\nLe Tableaux copie : \n");
    for(int i=0;i<5;i++){
        printf("%d ", T2[i]);
    }

    return 0;

}