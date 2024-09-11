#include <stdio.h> 


int main(){

    int nombre;

    printf("Entrer un Nombre : ");
    scanf("%d" , &nombre);


    for(int i=0;i<10;i++){
        printf("%d * %d = %d\n" , nombre, i+1, nombre * (i+1));
    }

    return 0;

}