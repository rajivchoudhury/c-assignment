/**20. Consider a grading scheme as follows:
Marks       Grade
90 — 100    A
80 — 89     B
70 — 79     C
60 — 69     D
50 — 59     E
40 — 49     P
0 — 40      F
iii. Given marks, write a program in C to find the corresponding grade. If the
input marks are more than 100 or less than 0, you should assign the grade ‘X’
to indicate an error with the input marks. Do not use any if-else construct.**/

#include<stdio.h>

int main(){
    int marks = 75;

    char grade = 'X';

    grade = marks >=90 && marks <=100 ? grade = 'A' : grade ;
    grade = marks >=80 && marks <=89 ? grade = 'B' : grade ;
    grade = marks >=70 && marks <=79 ? grade = 'C' : grade ;
    grade = marks >=60 && marks <=69 ? grade = 'D' : grade ;
    grade = marks >=50 && marks <=59 ? grade = 'E' : grade ;
    grade = marks >=40 && marks <=49 ? grade = 'P' : grade ;
    grade = marks >=0 && marks <=39 ? grade = 'F' : grade ;

    printf("%c", grade);

    return 0;
}
