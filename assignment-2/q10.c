/**10. Given the initial velocity (u), acceleration (a), and the time (t), write a program in C to compute the final velocity of an object.**/
#include<stdio.h>

int main(){
    int u = 5, a = 2 , t = 10;
    double v = u + (a * t);

    printf("The final velocity is %g", v);

    return 0;
}
