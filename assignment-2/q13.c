/**13. Write a program in C to convert temperature in oF to oC.**/
#include<stdio.h>

int main(){
    int f = 97;
    double c = ((f - 32.0)* 5.0)/9.0;

    printf("The temprature in celcius is %g\n", c);

    return 0;
}
