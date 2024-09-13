#include <stdio.h> 

int Somme(int a , int b){
    return a + b;
}


int main(){

    int a , b , somme; 

    printf("Merci de Saisir La Valeur de A : ");
    scanf("%d" , &a);

    printf("Merci de Saisir La Valeur de B : ");
    scanf("%d" , &b);

    somme = Somme(a ,b);

    printf("%d + %d = %d" , a ,b , somme);
}