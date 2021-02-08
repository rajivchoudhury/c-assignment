/**15. Write a program in C to check whether a number is Armstrong or not.**/

#include<stdio.h>

int main(){
    int n = 153, r = 0, sum = 0, temp = n;
    r= n%10;
    sum = sum + r*r*r;
    n = n/10;
    printf("%d\n",sum);
    printf("%d\n",r);
    r = n % 10;
    sum = sum + r*r*r;
    printf("%d\n",sum);
    printf("%d\n",r);
    n = n/10;
    r = n % 10;
    sum = sum + r*r*r;
    printf("%d\n",sum);
    printf("%d\n",r);
    if( sum == temp){
        printf("Armstrong number");
    }else {
        printf("Not an Armstrong number");
    }

    return 0;
}
