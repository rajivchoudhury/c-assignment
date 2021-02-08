/**12. Write a program in C to convert temperature in oC to oF.**/
#include<stdio.h>

int main(){
    int c = 37;
    double f = (c * 9.0)/5.0 + 32.0 ;

    printf("The temprature in fahrenheit is %g", f);

    return 0;
}
