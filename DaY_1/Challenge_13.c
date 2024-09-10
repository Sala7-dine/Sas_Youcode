#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int n;
    int Taille=0, i=0; 

    printf("Saisir un nombre : ");
    scanf("%d" , &n);

    int sign = n;
    n = abs(n);

    int s = n;
    int hexa = n;
   
    while(n!=0){   
        n = n / 2;
        Taille++;
    }

    int T[Taille];

    while(s!=0){
        T[i] = s%2;
        s = s/2;
        i++;
    } 

    printf("Le Nombre en binaire est : \n");
    if(sign < 0) printf("%d",1);
    for(int i=Taille-1;i>=0;i--)
        printf("%d" , T[i]);

    printf("\nLe Nombre en Hexadicemal est : %X ",hexa);

}