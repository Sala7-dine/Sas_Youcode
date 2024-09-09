/*
    Challenge 9 : Calcul de la distance entre deux points dans un espace 3D
    Écrivez un programme C pour trouver la distance entre deux points donnés dans un espace 3D. Formule :

    Distance = √((x2-x1)² + (y2-y1)² + (z2-z1)²)

*/

#include <stdio.h>
#include <math.h>


int main(){

    int x1 , x2 , y1 , y2 , z1 , z2;
    float distance;

    printf("X1 = ");
    scanf("%d" , &x1);

    printf("Y1 = ");
    scanf("%d" , &y1);

    printf("Z1 = ");
    scanf("%d" , &z1);

    printf("X2 = ");
    scanf("%d" , &x2);

   printf("Y2 = ");
    scanf("%d" , &y2);

    printf("Z2 = ");
    scanf("%d" , &z2);

    distance = sqrtf(pow(x2 - x1 , 2) + pow(y2 - y1 , 2) + pow(z2 - z1 , 2)) ; 

    printf("La Distance est : %.2f" , distance);

    return 0;
}