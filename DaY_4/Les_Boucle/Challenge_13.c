#include <stdio.h>

int main(){

    int n , i ;

    printf("Veuillez Saisir un Nombre : ");
    scanf("%d", &n);

    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n" , i , n , i*n);
    }
}