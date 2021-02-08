/**We needed to print
4321
 321
  21
   1
 **/

#include<stdio.h>

int main(){
    int n = 4;

    for(int i = 0; i < n ; i++){
        for(int j = i; j < n ; j++){
            printf("%d", n - j);
        }
        printf("\n");
        for(int k = 0;k <= i ; k++ ){
            printf(" ");
        }
    }


    return 0;
}
