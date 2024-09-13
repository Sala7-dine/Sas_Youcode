#include <stdio.h>


int main(){

    int i,j,k,n;  

    printf("Merci de Saisir un Nombre : ");
    scanf("%d" , &n);

    for(i = 0 ; i<n ; i++){

        for(j=i; j<n;j++){
        printf("  ");
        }

        for(k=0; k < 2*i-1 ; k++ ){
            printf("* ");
        }
        printf("\n");
    }
}        
