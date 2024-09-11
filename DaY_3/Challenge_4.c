#include <stdio.h> 


int main(){

    int nombre ,count = 1;

    printf("Entrer un Nombre : ");

    scanf("%d" , &nombre);

    while(nombre != 0){
        if(count % 2 != 0){
            printf("%d ",count);
            nombre--;
        }
        count++;
    }
    return 0;
}