/**6. Write a program in C to find the maximum of two numbers. Do not use the ?:
operator.*/

#include <stdio.h>

int main(){
    int a = 4, b = 6;

    if(a > b){
        printf("%d is max", a);
    }else{
        printf("%d is max", b);
    }

    return 0;
}
