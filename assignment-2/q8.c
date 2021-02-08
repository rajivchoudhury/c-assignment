/**8. Write a program in C to solve a quadratic equation. If the equation is ax2 + bx + c = 0, then a, b, and c are inputs.**/
#include<stdio.h>
#include<math.h>

int main(){
    int a = 3, b = -8 , c = 3;
    double x1 = (-b + sqrt((b * b) - (4 * a * c)))/(2 * a);
    double x2 = (-b - sqrt((b * b) - (4 * a * c)))/(2 * a);

    printf("The solution of the quadratic equation is %g and %g", x1, x2);

    return 0;
}
