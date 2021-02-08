/**11. Write a program in C to print all even numbers between 1 − n, where n is a positive integer.**/

#include<stdio.h>

int main(){
    int n = 140;

    for (int i = 1; i <= n; i++){
        if(i % 2 == 0){
            printf("%d is even no.\n", i);
        }else {
            printf("%d is odd no.\n",i);
        }
    }

    return 0;
}
