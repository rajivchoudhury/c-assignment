/**16. Write a program in C to input the basic salary of an employee and calculate his/her
gross salary according to the following rules:
i. If basic salary is up to 30000 rupees, he/she gets 20% HRA and 30% DA.
ii. If basic salary is up to 60000 rupees but more than 30000 rupees, he/she gets
25% HRA and 35% DA.
iii. If the basic salary is more than 60000 rupees, he/she gets 30% HRA and 40%
DA.**/

#include<stdio.h>

int main(){
    double basic = 15000.0;

    double gross = 0.0;

    if(basic <= 30000){
        gross = basic + 0.2 * basic + 0.3 * basic;
    }else if (basic > 30000 && basic <= 60000){
        gross = basic + 0.25 * basic + 0.35 * basic;
    }else if (basic > 60000){
        gross = basic + 0.3 * basic + 0.4 * basic;
    }

    printf("%g is the gross salary", gross);

    return 0;
}
