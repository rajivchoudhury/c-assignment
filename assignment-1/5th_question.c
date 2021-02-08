#include<stdio.h>

void main(){
    char myChar = 'C';
    unsigned char myUnsignedChar = 'C';
    signed char mySignedChar = 'C';
    int myInt = -1 * 'C';
    unsigned int myUnsignedInt = 0x5E;
    short myShort = -1 * 'C';
    unsigned short myUnsignedShort = 010;
    long myLong = -10000000;
    unsigned long myUnsignedLong = 10000000000;
    float myFloat = 0.325;
    double myDouble = 1.5e-3;
    long double myLongDouble = 3.2e30;

    printf("%c \n",myUnsignedChar);

    return 0;
}
