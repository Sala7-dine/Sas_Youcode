#include <stdio.h>

int main(){

    int Taille1 , Taille2 , Taille3 , nv , n  , somme = 0 ;

    printf("Merci de Saisir le nombre d'element : ");
    scanf("%d" , &Taille1);

    printf("Merci de Saisir le nombre d'element : ");
    scanf("%d" , &Taille2);

    Taille3 = Taille1 + Taille2;

    int T1[Taille1];
    int T2[Taille2];
    int T3[Taille3];

    printf("Saisir les element de Tableaux 1 : \n");
    for(int i=0;i<Taille1;i++){
        printf("T[%d] = " , i+1);
        scanf("%d" , &T1[i]);
    } 

    printf("Saisir les element de Tableaux 2 : \n");
    for(int i=0;i<Taille2;i++){
        printf("T[%d] = " , i+1);
        scanf("%d" , &T2[i]);
    } 

    for(int i=0 ; i < Taille1 ; i++){
        T3[i]  = T1[i];
    }

    int count = 0;
    for(int i=Taille1; i< (Taille2+Taille1)  ; i++){
        T3[i]  = T2[count];
        count++;
    }


    printf("les element de Tableux Finale est : \n");
    for(int i=0;i<Taille3;i++){
        printf("%d\n" , T3[i]);
    }

     
    return 0;
}