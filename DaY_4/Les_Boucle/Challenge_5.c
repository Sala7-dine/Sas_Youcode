#include <stdio.h>


int main(){

    int i , n , somme = 0; 

    printf("Merci de Saisir un Nombre : ");
    scanf("%d" , &n);

    for(i=0;i<=n;i++){
        somme += i;
    }

    printf("%d" , somme);

}