/**
****
  *
 *
****
**/

#include<stdio.h>

int main(){
    int n = 4;

    for(int i = 1; i <= n; i++){
        printf("*");
    }
    printf("\n");
    for(int i = 1; i < n - 2; i++){
        for(int k = n - 3 ; k >= 0; k--){
            printf(" ");
        }
        printf("*\n");
    }
    for(int i = 1; i < n - 2; i++){
        for(int k = n - 4 ; k >= 0; k--){
            printf(" ");
        }
        printf("*\n");
    }
    for(int i = 1; i <= n; i++){
        printf("*");
    }

    return 0;
}
