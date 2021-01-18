/**20. Write a program in C to print the Fibonacci series up to the first n terms.**/

#include<stdio.h>

int main(){
    int n = 10;

    int f_1 = 0, f_2 = 1, next;
    printf("fabo(%d) = %d\n", 0, f_1);
    for(int i = 1 ; i <= n ; i++){
        printf("fabo(%d) = %d\n", i, f_2);
        next = f_1 + f_2;
        f_1 = f_2;
        f_2 = next;
    }

    return 0 ;
}
