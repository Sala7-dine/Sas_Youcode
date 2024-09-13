#include <stdio.h> 

int Maximum(int a , int b){

    if(a > b) {
        return a;
    } 

    return b;
}


int main(){

    int a , b , max; 

    printf("Merci de Saisir La Valeur de A : ");
    scanf("%d" , &a);

    printf("Merci de Saisir La Valeur de B : ");
    scanf("%d" , &b);

    max = Maximum(a , b);
 
    printf("Le max est : %d" , max);

    return 0;
}