/**10. Write a program in C to check whether a character is an alphabet in English, a digit, or something else.**/
#include<stdio.h>

int main(){
    int ch = 'b';

    if((ch >= 65 && ch <=90) || (ch >= 97 && ch <=122)){
        printf("It is a character");
    }else if (ch >= 0 && ch <= 9){
        printf("It is a digit");
    }else{
        printf("Something else");
    }

    return 0;
}
