#include <stdio.h> 


int main(){


    int base , exposant , i = 0 ,res=1;


    printf("Merci de saisir La base : ");
    scanf("%d" , &base);
     
    printf("Merci de saisir L'exposant : ");
    scanf("%d" , &exposant);


    while( i < exposant){

        res *= base;
        i++;

    }

    printf("%d" , res);


}