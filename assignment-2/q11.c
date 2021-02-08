/**11. Given the initial velocity (u), acceleration (a), and the time (t), write a program in C to compute the final displacement of an object.**/
#include<stdio.h>

int main(){
    int u = 5 , a = 2 , t = 5 ;
    double s = (u * t) + (0.5 * a * t * t);

    printf("the final displacement is %g", s);

    return 0;
}
