/**
7. A cricket match is going on. First five overs are done. The runs accumulated in
these five overs are stored in five integers variables: r1, r2, r3, r4, and r5. Write a
program in C to print a horizontal bar chart to show runs per over. If the values of
these five variables are, respectively, 4, 2, 0, 10, 7, the chart needs to be as follows.
Over 1: ####
Over 2: ##
Over 3:
Over 4: ##########
Over 5: #######
**/


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
