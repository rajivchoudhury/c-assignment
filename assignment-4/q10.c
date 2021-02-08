/**10. Write a program in C to count the number of digits in a number.**/

#include<stdio.h>

int main(){
    int n = 837487;

    int digits = 0;

    for(digits = 0; digits < n; digits++){
        n /= 10;
    }

    printf("Digits: %d", digits);

    return 0;
}
