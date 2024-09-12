#include <stdio.h> 
int main(){

    int i , j , n;

    printf("Merci de Saisir un Nombre : ");
    scanf("%d" , &n);

    for(i=2;i<n;i++){
        int estPremier = 1;
        for (j=2; j < i-1; j++){
            if(i % j == 0){
                estPremier = 0;
                break;
            } 
        }
        if(estPremier) printf("%d " , i);
    }

}
