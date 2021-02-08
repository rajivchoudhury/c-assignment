/**6. Write a program in C to calculate simple interests. **/
#include<stdio.h>

int main(){
    double prin = 100000.0 , rate = 8.5 , n = 5.0;
    double si = prin * rate * n;

    printf("The simple simple interest is %f", si);

    return 0;
}
