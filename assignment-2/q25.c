/**25. Write a program in C to find if a year is a leap year. If it is a leap year, print Y.
Otherwise, print N. You cannot use any if () statement.**/
#include<stdio.h>

int main(){
    int year = 2000;

    char j = (year%4)==0 ? 'Y' : 'N';

    printf("%c\n", j);

    return 0;
}
