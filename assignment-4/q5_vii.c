/**We needed to print
&&&&
 &&&
  &&
   &
 **/

#include<stdio.h>

int main(){
    int n = 4;

    for(int i = 0; i < n ; i++){
        for(int j = i; j < n ; j++){
            printf("&");
        }
        printf("\n");
        for(int k = 0;k <= i ; k++ ){
            printf(" ");
        }
    }


    return 0;
}
