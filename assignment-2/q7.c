/**7. Write a program in C to calculate compound interests.**/
#include<stdio.h>
#include<math.h>

int main(){
    double p = 100000.0, r =6.5, n = 3.0;
    double ci =(p * pow(1 + r/100.0,n)) - p;

    printf("The compound interest of %g amount of interest %g for %g years is %f", p, r , n, ci);

    return 0;
}
