/**20. Write a C program to swap two int variables using a third variable.**/
#include<stdio.h>

int main(){
    int a = 5 , b = 9 , c;
    printf("Initial values of two nos are %d and %d\n", a , b);

    c = a;
    a = b;
    b = c;

    printf("Values after swapping becomes %d and %d" , a , b);

    return 0;
}
