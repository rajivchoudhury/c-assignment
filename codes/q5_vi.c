/**We needed to print
@@@@
@@@
@@
@
**/

#include<stdio.h>

int main(){
    int n = 4;

    for(int i = n - 1; i >= 0; i--){
        for(int j = i; j >= 1; j--){
        printf("@");
    }
        printf("@\n");
    }


    return 0;
}

