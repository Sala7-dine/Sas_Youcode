#include <stdio.h> 


int main(){

    int nombre , factorielle=1;

    printf("Entrer un Nombre : ");
    scanf("%d" , &nombre);


    for(int i=1;i<=nombre;i++){
        factorielle *= i;
    }

    printf("%d" , factorielle);
    return 0;

}