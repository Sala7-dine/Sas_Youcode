#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
   
    int Taille = 0 , i=0; 

    printf("Saisir un nombre : ");
    scanf("%d" , &n);

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

    printf("Le Nombre en binaire est : ");
    for(int i=Taille-1;i>=0;i--)
        printf("%d" , T[i]);

    printf("\n%x ",hexa);

}