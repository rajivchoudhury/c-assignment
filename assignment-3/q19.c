/**19. Write a program in C to find a minimum of three numbers. Do not use &&, ||, and ?: operators.**/

#include<stdio.h>

int main(){
    int a = 4, b = 5 , c = 6;

    if(a < b){
        if(a < c){
            printf("%d is min", a);
        }
    }else if(b < c){
        if(b < a){
            printf("%d is min", b);
        }
    }else if(c < a){
        if(c < b){
            printf("%d is min", c);
        }
    }

    return 0;
}
