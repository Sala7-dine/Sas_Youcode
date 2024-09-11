#include <stdio.h> 


int main(){

    int nombre , somme=0;

    printf("Entrer un Nombre : ");
    scanf("%d" , &nombre);


    for(int i=1;i<=nombre;i++){
        somme += i;
    }

    printf("%d" , somme);
    return 0;

}