/**20. Consider a grading scheme as follows:
Marks       Grade
90 — 100    A
80 — 89     B
70 — 79     C
60 — 69     D
50 — 59     E
40 — 49     P
0 — 40      F
ii. Given marks, write a program in C to find the corresponding grade. If the
input marks are more than 100 or less than 0, you should assign the grade ‘X’
to indicate an error with the input marks. Do not use &&, ||, and ?: operators.**/

#include<stdio.h>

int main(){
    int marks = -195;

    char grade = 'X';

    if(marks >= 90){
        if(marks <=100){
            grade = 'A';
        }
    }else if (marks >=80){
        if(marks <= 89){
            grade = 'B';
        }
    }else if (marks >=70){
        if(marks <= 79){
            grade = 'C';
        }
    }else if (marks >=60){
        if(marks <= 69){
            grade = 'D';
        }
    }else if (marks >=50){
        if(marks <= 59){
            grade = 'E';
        }
    }else if (marks >=40){
        if(marks <= 49){
            grade = 'P';
        }
    }else if (marks >=0){
        if(marks <= 39){
            grade = 'F';
        }
    }

    printf("%c", grade);

    return 0;
}
