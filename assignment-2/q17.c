/**17. Write a program in C to calculate the product of the digits of a five-digit positive integer.
Do not use any loop construct.**/
#include<stdio.h>

int main(){
    int num = 87654;
    int a0 = num % 10;
    int a1 = (num % 100)/10;
    int a2 = (num % 1000)/100;
    int a3 = (num % 10000)/1000;
    int a4 = num /10000;

    printf("The product of digits is %d\n", a0 * a1 * a2 * a3 * a4);

    return 0;
}
