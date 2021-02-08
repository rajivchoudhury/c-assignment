/**3. Write a program in C to find the area of a circle. The radius of the circle is input. **/
#include<stdio.h>

int main(){
    double r = 2.0;
    //the formula area = (pie) r^2
    double area = 3.141 * r * r;

    printf("The area of circle is %g", area);

    return 0;
}
