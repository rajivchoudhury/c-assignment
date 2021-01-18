/**
<<<<(      )   >
<<< ((    ))  >>
<<  (((  ))) >>>
<   (((())))>>>>
**/

#include<stdio.h>

int main(){
    int n = 4;

    for(int i = n; i >= 0; i--){
        for(int j = i; j >= 1; j--){
        printf("<");
    }
    for(int m = 0; m < n - i; m++){
        printf(" ");
    }
    for(int k = n; k >= i; k--){
        printf("(");
    }
    for(int m = i - 1; m >= 1; m--){
        printf(" ");
    }
    for(int m = i - 1; m >= 1; m--){
        printf(" ");
    }
    for(int k = 0; k < n - i + 1; k++){
        printf(")");
    }
    for(int m = i - 1; m >= 1; m--){
        printf(" ");
    }
    for(int k = 0; k < n - i + 1; k++){
        printf(">");
    }
        printf("\n");
    }


    return 0;
}
