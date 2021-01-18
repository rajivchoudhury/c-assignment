/**22. Write a program in C to check whether a number is Perfect number or not.**/


#include<stdio.h>

int main(){
    int n = 28;
    int sum = 0;

    for(int i = 1; i < n ; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n){
        printf("%d is a perfect number", n);
    }else{
        printf("%d is not a perfect number", n);
    }

    return 0 ;
}
