#include <stdio.h>


int main(){

    int i , n , f1 = 0, f2 =1 , fn; 

    printf("Merci de Saisir un Nombre : ");
    scanf("%d" , &n);

    for(i=0;i<=n;i++){

        if(i <= 1){
            fn = i;
        }else{
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
        printf("%d " , fn);
    }

}