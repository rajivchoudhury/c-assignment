/**24. Write a program in C to find whether a given number is odd or even. If the number is odd, print O.
Otherwise, print E.You cannot use any if () statement.**/
#include<stdio.h>

int main(){
    int a = 5 ;

    char j = (a%2)==1 ? 'O' : 'E';

    printf("%c\n", j);

    return 0;
}
