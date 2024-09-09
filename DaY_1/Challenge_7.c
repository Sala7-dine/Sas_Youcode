
/*Challenge 7 : Moyenne pondérée de trois nombres
Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres donnés par l'utilisateur avec les pondérations suivantes :

1er nombre : pondération 2
2ème nombre : pondération 3
3ème nombre : pondération 5
*/

#include <stdio.h>

int main(){

    int nombre1 , nombre2 , nombre3 , pr1 = 2 , pr2 = 3 , pr3 = 5;
    float moyenne_prd;

    printf("Merci de Saisir Le Nombre 1 : ");
    scanf("%d" , &nombre1);

    printf("Merci de Saisir Le Nombre 2 : ");
    scanf("%d" , &nombre2);

    printf("Merci de Saisir Le Nombre 3 : ");
    scanf("%d" , &nombre3);

    moyenne_prd = (nombre1*pr1 + nombre2*pr2 + nombre3*pr3) / pr1 + pr2 + pr3;

    printf("Le Moyenne Ponderee est : %.2f", moyenne_prd);

    return 0;
}