#include <stdio.h>

int main(){

    int i , n;
    
    printf("Veuillez Saisir un Nombre : ");
    scanf("%d" , &n);

    for(i=10;i>=1;i--){
        printf("%d * %d = %d\n" , i , n , i*n);
    }
}