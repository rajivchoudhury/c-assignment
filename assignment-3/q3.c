/**3. Write a program in C to check whether a number is divisible by either 7 or 13, or not.**/
#include <stdio.h>

int main(){
    int n = 14;
    if ((n % 7)==0 ) {
        printf("yes\n");
    }else if ((n % 13) == 0) {
        printf("yes\n");
    }else {
        printf("no\n");
    }

    return 0;
}
