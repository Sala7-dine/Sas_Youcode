#include <stdio.h>

int main(){

    int inverse , n;

    printf("Merci de Saisir un Nombre : ");
    scanf("%d" , &n);

    inverse = 0;
    while (n!=0){

        inverse = (inverse * 10) + (n % 10);
        n = n / 10;

    }

    printf("%d" , inverse);

}