/**We needed to print
1234
123
12
1
 **/

#include<stdio.h>

int main(){
    int n = 4;

    for(int i = 0 ; i < n; i++){
        printf("%d", i + 1);
    }
    printf("\n");
    for(int i = 0 ; i < n - 1; i++){
        printf("%d", i + 1);
    }
    printf("\n");
    for(int i = 0 ; i < n - 2; i++){
        printf("%d", i + 1);
    }
    printf("\n");
    for(int i = 0 ; i < n - 3; i++){
        printf("%d", i + 1);
    }
    printf("\n");


    return 0;
}
