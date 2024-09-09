/* Challenge 2 : Conversion de la température
Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin. Formule :
K = C + 273.15
*/
#include <stdio.h>

int main(){

    float kelvin , celsius;

    printf("Merci de Saisir La Temperature en Celsuis : ");
    scanf("%f" , &celsius);

    kelvin = celsius + 273.15 ;

    printf("\n%.2f celsuis = %.2f Kelvin" , celsius , kelvin);

    return 0;
    
}