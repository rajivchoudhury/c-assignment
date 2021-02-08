/**21. Write a program in C to swap two int variables without using a third variable.**/
#include<stdio.h>

int main(){
    int a = 5 , b = 9;
    printf("Initial values of two nos are %d and %d\n", a , b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Values after swapping becomes %d and %d" , a , b);

    return 0;
}
