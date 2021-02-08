/**15. Write a program in C to reverse a number (a positive integer).
 Assume the number has at most five digits. Do not use any loop construct.**/
#include<stdio.h>

int main(){
    int num = 34567;
    int a0 = num % 10;
    int a1 = (num % 100)/10;
    int a2 = (num % 1000)/100;
    int a3 = (num % 10000)/1000;
    int a4 = num /10000;

    printf("The reversed number is %d%d%d%d%d", a0, a1, a2, a3, a4);

    return 0;
}
