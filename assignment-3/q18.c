/**18. Write a program in C to find if a year is a leap year. Do not use &&, ||, and ? : operators.**/

#include<stdio.h>

int main(){
    int year = 2002;

    if(year % 400 == 0){
        printf("%d is a leap year", year);
    }else if(year % 100 == 0){
        printf("%d is not a leap year", year);
    }else if (year % 4 == 0){
        printf("%d is a leap year", year);
    }else {
        printf("%d is not a leap year", year);
    }

    return 0;
}
