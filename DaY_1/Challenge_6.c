/*
    Challenge 6 : Calcul et affichage des résultats
    Deux nombres réels, a et b, sont saisis au clavier. 
    Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.

*/


#include <stdio.h>

int main(){

    float dev , a , b;

    printf("Saisir La valeur de A : ");
    scanf("%f" , &a);

    printf("Saisir La valeur de B : ");
    scanf("%f" , &b);

    printf("a + b = %.2f\n" , a+b);
    printf("a - b = %.2f\n" , a-b);
    printf("a * b = %.2f\n" , a*b);
    printf("a / b = %.2f" , a/b);

    return 0;



}
