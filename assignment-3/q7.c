/**7. Write a program in C to check whether a character is an alphabet in English or not.**/

#include <stdio.h>

int main(){
    int ch = 'a';

    if((ch >= 65 && ch <=90) || (ch >= 97 && ch <= 122)){
        printf("Chararacter is %c", ch);
    }else{
        printf("Not a character");
    }

    return 0;
}
