/**4. Write a program in C to check whether a number is divisible only by either of 7 and 13 (but not both), or not.**/
#include <stdio.h>

int main(){
    int n = 7 *13 ;

    if (
        (n % 7)==0 && (n % 13) != 0
        ||
        (n % 7)!=0 && (n % 13) == 0
        ){
            printf("yes");
    }else {
        printf("no");
    }

    return 0;
}
