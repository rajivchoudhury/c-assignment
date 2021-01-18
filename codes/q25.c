/**25. Write a program in C to find if a year is a leap year. You cannot use && operaTor, ||
operator, ?: operator, break, continue, and any if-else construct.**/


#include<stdio.h>

int main(){
    int year = 2013;

    int flag = 0;
    while(year % 4 == 0){
        while(flag == 0){
        while(year % 400 == 0){
            while(flag == 0){
            printf("%d is a leap year", year);
            flag = 1;
            }
        }
        while(year % 100 != 0){
            while(flag == 0){
            printf("%d is a leap year", year);
            flag = 1;
            }
        }
        flag = 1;
        }
    }
    while(year % 100 == 0){
         while(flag == 0){
         while(year % 400 != 0){
            while(flag == 0){
            printf("%d is not a Leap year", year);
            flag = 1;
            }
        }
        flag = 1;
        }
    }
    while(year % 4 != 0){
        while(flag == 0){
        printf("%d is not a leap year", year);
        flag = 1;
        }
        flag = 1;
    }

    return 0 ;
}
