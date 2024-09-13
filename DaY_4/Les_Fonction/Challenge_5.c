#include <stdio.h> 

int factoriel(int a){

    int fact = 1;
     for(int i=1;i<=a;i++){
        fact *= i;
    }
    return fact;
}


int main(){

    int a , fact; 

    printf("Veuillez Saisir un Nombre : ");
    scanf("%d" , &a);

    fact = factoriel(a);
 
    printf("Le factoriel de %d est : %d" , a ,fact);

    return 0;
}