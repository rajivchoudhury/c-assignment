/**14. Write a program in C to check whether a triangle is an equilateral, isosceles, or scalene triangle. Consider all sides of the triangles as inputs.**/

#include<stdio.h>

int main(){
    int a = 3, b = 4, c = 5;

    if (a + b > c && b + c > a && c + a > b && a > 0 && b > 0 && c > 0){
    if (a == b && b == c ){
        printf("It is an equilateral triangle");
    }else if (a == b || b == c || a == c){
        printf("It is an isosceles triangle");
    }else {
        printf("It is a scalene triangle");
    }
    }else{
        printf("The Triangle is invalid");
    }


    // sir's program
    // double a = 22.0/7.0, b = 22.0/7.0, c = 22.0/7.0;

    // double max_error = 0.0000001;
    // double diff_ab = a - b > 0 ? a -b : b -a ;
    // double diff_ac = a - c > 0 ? a -c : c -a ;
    // double diff_bc = b - c > 0 ? b -c : c -b ;

    // if (a + b > c && b + c > a && c + a > b && a > 0 && b > 0 && c > 0){
    // if (diff_ab < max_error && diff_bc < max_error && diff_ac < max_error){
    //     printf("It is an equilateral triangle");
    // }else if (diff_ab < max_error || diff_bc < max_error || diff_ac < max_error){
    //     printf("It is an isosceles triangle");
    // }else {
    //     printf("It is a scalene triangle");
    // }
    // }else{
    //     printf("The Triangle is invalid");
    // }

    return 0;
}
