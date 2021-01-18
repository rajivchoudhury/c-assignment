#include<stdio.h>

int main(){
    int r1 = 4, r2 = 2, r3 = 0 , r4 = 10 , r5 = 7;
    int over = 5;

    for(int i = 1; i <= over ; i++){
            printf("Over %d:", i);
        if(i== 1){
        for(int j = 1; j <= r1; j++){
            printf("#");
        }
        printf("\n");
        }if(i== 2){
        for(int j = 1; j <= r2; j++){
            printf("#");
        }
        printf("\n");
        }if(i== 3){
        for(int j = 1; j <= r3; j++){
            printf("#");
        }
        printf("\n");
        }if(i== 4){
        for(int j = 1; j <= r4; j++){
            printf("#");
        }
        printf("\n");
        }if(i== 5){
        for(int j = 1; j <= r5; j++){
            printf("#");
        }
        printf("\n");
        }
    }

    return 0;
}
