/**14. Write a program in C to extract the individual digits of a given number
(a positive integer) and add them. Assume the number has at most five digits.
Do not use any loop construct.**/
#include<stdio.h>

int main(){
    int num = 12345;
    int a0 = num % 10;
    int a1 = (num % 100)/10;
    int a2 = (num % 1000)/100;
    int a3 = (num % 10000)/1000;
    int a4 = num /10000;

    printf("The digits are %d, %d, %d, %d and %d \nAnd sum is %d", a0, a1, a2, a3, a4, a0 + a1 + a2 + a3 + a4);

    return 0;
}
