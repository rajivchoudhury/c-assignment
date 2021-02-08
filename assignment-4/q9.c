#include<stdio.h>

int main(){
    int a = 12 , b = 28;
    int gcd = a > b ? a : b;

    for( ; ; ){
        //printf("%d\n", gcd);
        if((a % gcd == 0) && (b % gcd == 0)){
            break;
        }
        gcd--;
    }

    printf("GCD: %d", gcd);

    return 0;
}

