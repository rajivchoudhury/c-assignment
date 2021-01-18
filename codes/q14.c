/**14. Write a program in C to reverse a number.**/

#include<stdio.h>

int main(){
    int n = 87654;
    int num = n;
    int reverse = 0;

    while(n != 0){
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    printf("%d is reverse of %d\n", reverse , num);

    return 0;
}
