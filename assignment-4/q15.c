/**15. Write a program in C to find whether a given positive integer is prime or not.**/

#include<stdio.h>

int main(){
    int n = 789;

    int i = 0;

    for(i = 2;i < n/2; i++){
        if(n % i == 0){
            break;
        }
    }

    if(n % i != 0){
        printf("%d is prime", n);
    }else {
        printf("%d is not prime", n);
    }

    return 0;
}
