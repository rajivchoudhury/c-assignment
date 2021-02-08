/**2. Write a program in C to find the average of five numbers.**/
#include <stdio.h>

int main(){
    double a = 10.0, b = 15.0, c = 18.0 , d = 21.0 , e = 23.0, avg = 0.0;
    avg = (a + b + c + d + e)/5.0;

    printf("The average of the given numbers are %g", avg);

    return 0;
}
