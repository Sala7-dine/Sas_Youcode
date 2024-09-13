#include <stdio.h>

int main(){

    int n , i , moyenne , count = 0;

    int somme = 0;
    
    while(n != 0){

        printf("Entrer un nombre positive : ");
        scanf("%d" , &n);

        if(n > 0) {
            somme += n;
            count++;
        }
    }

    moyenne = somme / count ;

    printf("%d" , moyenne);

}