#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse(char *str){

    char *start = str;
    char *end =  str;   

    while(*end != '\0'){
        end++;
    }
    end--;

    while(start < end){
        char tmp = *start;
        *start = *end;
        *end = tmp;
        start++;
        end--;

    } 
    return str;

}

int main(){

    char *str = malloc(8*sizeof(char));

    strcpy(str , "Bonjour");

    char *rv = reverse(str);

    printf("%s" , rv);

}