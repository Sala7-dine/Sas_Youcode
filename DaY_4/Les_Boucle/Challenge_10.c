#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {

    srand(time(NULL));

    int counter= 0;

    for(int i=0 ;counter<20;i++){

        char random = 48 + (rand() % 74);
        if( (random >= 48 && random <= 57 ) || (random >= 65 && random <= 90 ) || (random >= 97 && random <= 122 )){
            printf("%c" , random);
            counter++;      
            
        }
    }
    
    return 0;
}