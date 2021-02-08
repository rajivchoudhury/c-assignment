/**12. Write a program in C to check whether a triangle is valid or not. Consider all angles of the triangles as inputs.**/
#include<stdio.h>

int main(){
    int a = 90, b = 30, c= 60;

    if (a + b + c == 180){
        printf("The triangle is valid");
    }else {
        printf("It is an invalid triangle");
    }

    return 0;
}
