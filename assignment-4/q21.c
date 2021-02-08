/**21. Write a program in C to find x n for a given positive real value x and a positive integer n.**/


#include<stdio.h>

int main(){
    double x = 3.0;
    int exp = 4;

    double x_n =1.0;

    for(int i = 1; i <= exp ; i++){
        x_n *= x;
    }

    printf("%g ^ %d = %g", x , exp, x_n);

    return 0 ;
}

