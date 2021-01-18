/**19. Write a program in C to print the factors of a given number.**/

#include<stdio.h>

int main(){
    int n = 68;

    printf("Factors : ");

    for(int i = 1; i <= n ; i++){
        if(n % i == 0){
            printf("%d ", i);
        }
    }

    return 0;
}

