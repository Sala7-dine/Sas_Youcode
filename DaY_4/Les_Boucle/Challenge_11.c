#include <stdio.h>

int main(){

    int n , i , count = 0;

    int somme = 0;
    
    while(n != 0){

        printf("Entrer un nombre positive : ");
        scanf("%d" , &n);

        if(n > 0) {
            somme += n;
            count++;
        }
    }

    float moyenne = (float)somme / (float)count ;

    printf("%.2f" , moyenne);

}