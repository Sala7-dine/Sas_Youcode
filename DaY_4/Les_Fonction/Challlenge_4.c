#include <stdio.h> 

int Minimum(int a , int b){

    if(a < b) {
        return a;
    } 

    return b;
}


int main(){

    int a , b , min; 

    printf("Merci de Saisir La Valeur de A : ");
    scanf("%d" , &a);

    printf("Merci de Saisir La Valeur de B : ");
    scanf("%d" , &b);

    min = Minimum(a , b);
 
    printf("Le min est : %d" , min);

    return 0;
}