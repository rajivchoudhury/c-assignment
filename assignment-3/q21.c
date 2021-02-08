/**21. Write a program in C to check an input alphabet is in which category among the
four:
i.A small letter and a vowel.
ii.A capital letter and a consonant.
iii.A character in English but does not fall in the last two categories.
iv.Not a character in English (maybe a special character, e.g., $).**/



#include<stdio.h>

int main(){
    char ch = 'F';

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("%c is a small letter and a vowel.", ch);
    }else if (ch >= 'A' && ch <= 'Z' && ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U'){
        printf("%c is a capital letter and a consonant.", ch);
    }else if (ch >= 'a' && ch <= 'z' || ch >='A' && ch <= 'Z'){
        printf("%c is a character in English but does not fall in the last two categories.", ch);
    }else {
        printf("%c is not a character in English", ch);
    }

    return 0;
}
