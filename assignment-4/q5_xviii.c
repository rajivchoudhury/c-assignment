/**
1
0 1 0
1 0 1 0 1
0 1 0 1 0 1 0
1 0 1 0 1
0 1 0
1
**/

#include<stdio.h>

int main(){
    int n = 4;
    int num = 0;

    for(int j = 0; j < 2 * n ; j += 2){
        for(int i = 0; i <= j ; i++){
            num++;
            printf("%d ", num % 2);
    }
    printf("\n");
    }
    for(int j = 2 * n - 4 ; j >= 0; j -= 2){
        for(int i = 0; i <= j ; i++){
        num++;
        printf("%d ", num % 2);
    }
    printf("\n");
    }

    return 0;
}
