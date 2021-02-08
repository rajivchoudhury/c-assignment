/**5. Write a program in C to check whether a number is negative, positive, or zero.**/

#include <stdio.h>

int main(){
    int n = 0;

    if(n > 0){
        printf("no is positive");
    }else if (n == 0){
        printf("zero");
    }else {
        printf("no is negetive");
    }

    return 0;
}
