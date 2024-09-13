#include <stdio.h> 

int Fibonacci(int a){

    int fn , i  , f1=0 , f2 = 1;
    for(i=0;i<a;i++){
         
        if(fn <= 1)
            fn = i;
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }

    return fn;
}


int main(){

    int a ; 

    printf("Veuillez Saisir un Nombre : ");
    scanf("%d" , &a);

    printf("Fibonacci de %d est : %d" , a , Fibonacci(a));

    return 0;
}