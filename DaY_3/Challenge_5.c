#include <stdio.h> 

// 3^4 = 3 * 3 * 3 * 3
 
int main(){

    int nombre , exp , puissance = 1;

    printf("Entrer le nombre de base : ");
    scanf("%d" , &nombre);

    printf("Entrer le nombre d'exposant : ");
    scanf("%d" , &exp);

    for(int i=1;i<=exp;i++){
        puissance = puissance * nombre;
    }

    printf("%d" , puissance);
    return 0;

}