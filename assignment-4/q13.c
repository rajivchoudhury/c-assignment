/**13. Write a program in C to print the sum and product of digits of an integer.**/

#include<stdio.h>

int main(){
    int n = 98347;
    int r = 0;
    int digits = 0, sum = 0 , product = 1;

    while(n != 0){
        r = n % 10;
        n /= 10;
        sum += r;
        product *= r;
    }

    printf("Sum of digits = %d and Product to digits = %d", sum , product);

    return 0;
}
