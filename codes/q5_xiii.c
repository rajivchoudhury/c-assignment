/**
1
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7
1 2 3 4 5
1 2 3
1
**/


#include<stdio.h>

int main(){
    int n = 4;
    int num = 1;

    for(int j = 0; j < 2 * n ; j += 2){
        for(int i = 0; i <= j ; i++){
        printf("%d ", num++);
    }
    printf("\n");
    num = 1;
    }
    for(int j = 2 * n - 4 ; j >= 0; j -= 2){
        for(int i = 0; i <= j ; i++){
        printf("%d ", num++);
    }
    printf("\n");
    num = 1;
    }


    return 0;
}
