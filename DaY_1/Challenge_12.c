/*
    Challenge 12 : Nombre entier à quatre chiffres en ordre inverse
    Écrivez un programme C pour afficher un nombre entier à quatre chiffres 
    dans l'ordre inverse sans utiliser de boucle. Par exemple, si le nombre entier est 1234, 
    son inverse est 4321.

*/

#include <stdio.h>

int main(){

    int inverse , n;

    printf("Merci de Saisir un nombre : ");
    scanf("%d",&n);

    inverse = (n % 10) * 1000 + ((n / 10) % 10) * 100 + ((n / 100) % 10) * 10 + (n / 1000);

    printf("%d" , inverse);

    return 0;   
    
}