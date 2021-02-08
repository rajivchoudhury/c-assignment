/**13. Write a program in C to check whether a triangle is valid or not. Consider all sides of the triangles as inputs.**/


#include<stdio.h>

int main(){
    int a = 3, b = 4, c = 5;

    if (a + b > c && a - b < c){
        printf("The Triangle is valid");
    }else {
        printf("The Triangle is invalid");
    }

    return 0;
}
