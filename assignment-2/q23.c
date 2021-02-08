/**23. Write a program in C to find the minimum of three numbers.**/
#include<stdio.h>

int main(){
    int a = 7 , b = 9 , c = 6;
    if((a < b)&&(a < c))
        printf("The min of the three is %d", a);
    if((b < c)&&(b < a))
        printf("The min of the three is %d", b);
    if((c < a)&&(c < b))
        printf("The min of the three is %d", c);

    return 0;
}
