/**5. Write a C program to find the area of a triangle. The lengths of the sides of the triangle are inputs.**/
#include<stdio.h>
#include<math.h>

int main(){
    double a = 3.0, b = 4.0, c = 5.0;
    double s = (a + b +c)/2.0;
    double area = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("The area of triangle is %g", area);

    return 0;
}
