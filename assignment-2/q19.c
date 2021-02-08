/**19. Write a program in C to check if a five-digit positive integer is palindrome or. For
instance, the number is 13531 is a palindrome. Do not use any loop construct. You
cannot use any if () statement. If it is a palindrome number, print Y. Otherwise,
print N.**/
#include<stdio.h>

int main(){
    int num = 10401;
    int a0 = num % 10;
    int a1 = (num % 100)/10;
    int a2 = (num % 1000)/100;
    int a3 = (num % 10000)/1000;
    int a4 = num /10000;


    char j = (a0 == a4)&&(a1 == a3) ? 'Y' : 'N';

    printf("%c", j);
    return 0;
}
