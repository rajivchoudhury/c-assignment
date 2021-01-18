/**
   0
  01
 012
0123
**/

#include<stdio.h>

int main(){
    int n = 4;

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n - i - 1 ; j++){
        printf(" ");
        }
        for(int k = 0; k <= i  ; k++){
        printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
