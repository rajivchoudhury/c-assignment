/**
1
23
456
7890
12345
**/

#include<stdio.h>

int main(){
    int n = 5;
    int num = 0;

    for(int i = 0; i < n ; i++){
        for(int j = 0; j <= i ; j++){
                num++;
            if(num < 10){
               printf("%d",num);
               }
               else{
                    printf("%d", num%10);
                    }
        }
        printf("\n");
    }

    return 0;
}
