/**9. Write a program in C to check whether a character is a vowel or consonant.**/

#include<stdio.h>

int main(){
    int ch = 'b';

    if (ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117 || ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85){
        printf("%c is vowel", ch);
    }else {
        printf("%c is consonant", ch);
    }

    return 0;
}
