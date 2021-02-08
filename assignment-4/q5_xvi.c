/**
<<<<(      )   >
<<< ((    ))  >>
<<  (((  ))) >>>
<   (((())))>>>>
**/

#include<stdio.h>

int main(){
    int n = 4;

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n - i; j++){
            printf("<");
        }
        for(int j = 0; j < i ; j++){
            printf(" ");
        }
        for(int k = 0; k <= i ; k++){
            printf("(");
        }
        for(int l = 0; l < n - i - 1; l++){
            printf(" ");
        }
        for(int l = 0; l < n - i - 1; l++){
            printf(" ");
        }
        for(int k = 0; k <= i ; k++){
            printf(")");
        }
        for(int l = 0; l < n - i - 1; l++){
            printf(" ");
        }
        for(int k = 0; k <= i ; k++){
            printf(">");
        }
        printf("\n");
    }



    return 0;
}
