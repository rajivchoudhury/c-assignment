#include<stdio.h>

int main(){
    int a = 12 , b = 12;
    int lcm = 0;

    for( ; ; ){
        lcm++;
        if((lcm % a == 0) && (lcm % b == 0)){
            break;
        }
    }
    printf("LCM: %d", lcm);

    return 0;
}
