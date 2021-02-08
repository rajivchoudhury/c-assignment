/**23. Write a program in C to find whether a given number is odd or even. You cannot use the ?: operator and the if-else construct.**/


#include<stdio.h>

int main(){
    int n = 10, Flag = 1;

    while((n % 2 == 0) && Flag == 1){
        printf("%d is even no.", n);
        Flag = 0;
    }

    while((n % 2 == 1) && Flag == 1){
        printf("%d is odd no.", n);
        Flag = 0;
    }


    return 0 ;
}
