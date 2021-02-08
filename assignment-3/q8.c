/**8. Write a program in C to check whether a character is an uppercase or lowercase alphabet.**/
#include <stdio.h>

int main(){
    int ch = 'a';

    if (ch >= 97 && ch <=122){
        printf("Character %c is lowercase", ch);
    }else if (ch >= 65 && ch <=90){
        printf("Character %c is UPPERCASE", ch);
    }else{
        printf("Not a character");
    }

    return 0;
}
