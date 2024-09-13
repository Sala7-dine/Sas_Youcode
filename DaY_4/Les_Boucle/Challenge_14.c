#include <stdio.h>

int main(){

    char *T[] = {"Lundi" , "Mardi" , "Mercredi" , "Jeudi" , "Vendredi" , "Samedi" , "Dimanche"}; 
    int i , n;

    printf("1 - Lundi\n"); 
    printf("2 - Mardi\n"); 
    printf("3 - Mercredi\n"); 
    printf("4 - jeudi\n"); 
    printf("5 - Vendredi\n"); 
    printf("6 - Samedi\n"); 
    printf("7 - Dimanche\n");
    printf("Choisir un jour : ");
    scanf("%d" , &n);

    for(i=n-1;i<7;i++){
        printf("%s " , T[i]);
    }
}