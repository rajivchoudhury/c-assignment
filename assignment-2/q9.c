/**9. Write a program in C to compute the area of a circle. The circumference of the circle is input. Consider π = 3.14.**/
#include<stdio.h>

int main(){
    int c = 10;
    double area = (c * c)/(4 * 3.14);

    printf("The area of the circle is %g\n", area);

    return 0;
}
