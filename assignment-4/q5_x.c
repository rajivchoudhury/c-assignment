/**
4
33
222
1111
**/

#include<stdio.h>

int main(){
    int n = 4;

    for(int i = 0; i < n ; i++){
        for(int j = 0; j <= i ; j++){
        printf("%d", n - i);
        }
        printf("\n");
    }

    return 0;
}
