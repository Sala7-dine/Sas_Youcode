/* Affichage Informations
 Écrivez un programme en C qui va permettre d'afficher vos informations personnelles 
 nom, prénom, âge, sexe, et adresse email. Les données sont saisies à partir du clavier.
*/

#include <stdio.h>

int main(){

    char nom[50] , prenom[50] , sexe[10] , email[30];
    int age;

    printf("Veuille Saisir votre info : \n");

    printf("Nom : ");
    scanf("%s" , nom);

    printf("Prenom : ");
    scanf("%s" , prenom);

    printf("age : ");
    scanf("%d" , &age);

    printf("sexe : ");
    scanf("%s" , sexe);

    printf("email : ");
    scanf("%s" , email);

    printf("\n\n-- Nom : %s\n" , nom);
    printf("-- Prenom : %s\n" , prenom);
    printf("-- Age : %d\n" , age);
    printf("-- Sexe : %s\n" , sexe);
    printf("-- Emaile : %s\n" , email);

    return 0;
}