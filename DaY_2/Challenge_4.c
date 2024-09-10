/*
    Challenge 4 : Equation du Deuxième Degré
    Écrivez un programme C qui permet de calculer les solutions possibles d’une 
    équation du deuxième degré.

*/


#include <stdio.h>
#include <math.h>


int main(){

    float a , b , c  , delta = 0 ;
    float x1 , x2 ; 


    printf("Veuillez Saisir La Valeur de A : ");
    scanf("%f" , &a);

    printf("Veuillez Saisir La Valeur de B : ");
    scanf("%f" , &b);

    printf("Veuillez Saisir La Valeur de C : ");
    scanf("%f" , &c);

    delta = b*b - (4*a*c);

    printf("%f\n" , delta);
 
    if(delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("les dolution de l'equation est :\nx1 = %.2f\nx2 = %.2f" , x1 , x2);
    }else if(delta == 0){
        x1 = -b / 2*a;
        printf("les dolution de l'equation est :\nx1 = %.2f" , x1);
    }else{
        printf("Equation vide");
    }
        
    return 0;
}