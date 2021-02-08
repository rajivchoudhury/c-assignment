/**2. Write a program in C to find whether a given number is odd or even. Do not use the
?: operator.**/
#include <stdio.h>

int main(){
    int num = 59;

    if (num % 2 ){
        printf("It is an odd no");
    }else{
        printf("It is an even no");
    }
    return 0;
}
