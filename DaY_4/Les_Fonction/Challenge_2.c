#include <stdio.h> 

int Prouit(int a , int b){
    return a * b;
}


int main(){

    int a , b , produit; 

    printf("Merci de Saisir La Valeur de A : ");
    scanf("%d" , &a);

    printf("Merci de Saisir La Valeur de B : ");
    scanf("%d" , &b);

    produit = Prouit(a ,b);

    printf("%d * %d = %d" , a ,b , produit);
}