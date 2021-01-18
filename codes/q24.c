/**24. Write a program in C to find if a year is a leap year. You cannot use && operator, || operator, ?: operator, and any if-else construct.**/

#include<stdio.h>

int main(){
    int year = 2012;

    while(year % 4 == 0){
        while(year % 400 == 0){
            printf("%d is a leap year", year);
            break;
        }
        while(year % 100 != 0){
            printf("%d is Leap year", year);
            break;
        }
        break;
    }
    while(year % 100 == 0){
         while(year % 400 != 0){
            printf("%d is not a Leap year", year);
            break;
        }
        break;
    }
    while(year % 4 != 0){
        printf("%d is not a leap year", year);
        break;
    }

    return 0 ;
}

