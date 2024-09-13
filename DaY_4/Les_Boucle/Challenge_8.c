#include <stdio.h>

int main(){

    int T[10] = {1,2,3,4,5,6,7,8,9,10}; 


    int n , i , middle , left = 0 , right = 10; 

    printf("Merci de Saisir un Nombre :");
    scanf("%d" , &n);

    while(left <= right){

        middle =  (left + right) / 2;

        if(T[middle] == n){
            printf("Le Nombre %d est Trouve." , T[middle]);
            break;
        }else if(n > T[middle]){
            left = middle + 1; 
        }else if(n<T[middle]){
            right = middle - 1;
        }

    }
    
    return 0;
}