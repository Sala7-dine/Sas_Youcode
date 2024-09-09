/* Challenge 5 : Affichage Température
Écrivez un programme qui demande la température en Celsius et affiche l'état de 
l'eau à cette température (solide, liquide, gaz). Règle :

C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz
*/


#include <stdio.h>

int main(){

    float celsuis;
    printf("Merci de Saisir la Tomperature en celsuis : ");
    scanf("%f" , &celsuis);


    if(celsuis < 0) printf("Solide");
    else if(celsuis <100) printf("Liquide");
    else printf("Gaz");

    return 0;




}
