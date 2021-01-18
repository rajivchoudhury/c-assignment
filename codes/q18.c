/**18. Write a program in C to check whether a number is a Strong number or not.**/


#include<stdio.h>

int main(){
    int number = 145;

    int temp = number, sum_fact = 0;

    while(temp){
        int n = temp % 10;
        int fact = 1;
        for(int i = 1; i<= n; i++){
            fact *= i;
        }
        sum_fact += fact;
        temp /= 10;
    }
    if(number == sum_fact){
        printf("%d is a strong number\n", number);
    }else{
        printf("%d is not a strong number\n", number);
    }

    return 0;
}

