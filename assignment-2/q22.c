/**22. Write a program in C to find the maximum of two numbers.**/
#include<stdio.h>

int main(){
    int a = 5, b = 3;
    int c = a > b ? a : b;

    printf("The max is %d", c);

    return 0;
}
