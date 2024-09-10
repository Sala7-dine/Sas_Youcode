/*
    Challenge 12 : Nombre entier à quatre chiffres en ordre inverse
    Écrivez un programme C pour afficher un nombre entier à quatre chiffres 
    dans l'ordre inverse sans utiliser de boucle. Par exemple, si le nombre entier est 1234, 
    son inverse est 4321.

*/

#include <stdio.h>

int main(){

    int number , n1 = 0, n2  , n3 ,n4;

    printf("Merci de Saisir un nombre : ");
    scanf("%d",&number);

    n1 = number % 10; 
    n2 =  ((number / 10) % 10); 
    n3 =  ((number / 100) % 10); 
    n4 =  (number / 1000) ;

    printf("%d%d%d%d" , n1 , n2 , n3 , n4 );

    return 0;   

}