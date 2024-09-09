/* Challenge 3 : Conversion de la distance
Écrivez un programme qui demande la distance en kilomètres et la transforme en yards. Formule :

Yards = Km * 1093.61

*/

#include <stdio.h>


int main(){

    float kelometre , yard;

    printf("Merci de Saisir La distance en kilometres : ");
    scanf("%f" , &kelometre);

    yard = kelometre * 1093.61;

    printf("\n%.2f kelometres = %.2f Yards" , kelometre , yard);

    return 0;
    
}