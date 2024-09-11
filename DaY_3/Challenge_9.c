#include <stdio.h>

int main(){

    int count =  0, n;

    printf("Merci de Saisir un Nombre : ");
    scanf("%d",&n);
    
    while(n!=0){
        n = n / 10;
        count++;

    }
    printf("%d", count);

}