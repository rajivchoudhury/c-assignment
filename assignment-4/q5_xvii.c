/**
(((())))
(((  )))
((    ))
(      )
((    ))
(((  )))
(((())))
**/

#include<stdio.h>

int main(){
    int n = 4;

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n - i; j++){
            printf("(");
        }
        for(int j = 0; j < i ; j++){
            printf(" ");
        }
        for(int j = 0; j < i ; j++){
            printf(" ");
        }
        for(int j = 0; j < n - i; j++){
            printf(")");
        }
        printf("\n");
    }
    for(int i = 0; i < n - 1; i++){
        for(int k = 0; k <= i + 1; k++){
            printf("(");
        }
        for(int j = 0;j < n - i - 2; j++){
            printf(" ");
        }
        for(int j = 0;j < n - i - 2; j++){
            printf(" ");
        }
        for(int k = 0; k <= i + 1; k++){
            printf(")");
        }
        printf("\n");
    }

    return 0;
}
