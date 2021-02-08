/**17. Write a program in C to calculate total electricity bill according to the given conditions:
i.For the first 50 units, the cost is rupees 2.50/unit.
ii.For the next 75 units, the cost is rupees 3.00/unit.
iii.For the next 100 units, the cost is rupees 3.50/unit.
iv.For units above 225, the cost is Rs. 4.00/unit.
v.An additional surcharge of 20% applies to the total amount if more than 200 units are consumed.**/

#include<stdio.h>

int main(){
    double unit = 450.0;

    double cost = 0.0;

    if(unit <= 50){
        cost = unit * 2.5;
    }else if(unit <= 125){
        cost = 50 * 2.5 + (unit - 50) * 3.0;
    }else if(unit <=200){
        cost = 50 * 2.5 + 75 * 3.0 + (unit - 125) * 3.5;
    }else if(unit <= 225){
        cost = 50 * 2.5 + 75 * 3.0 + (unit - 125) * 3.5;
        cost = cost * 1.20;
    }else if(unit > 225){
        cost = 50 * 2.5 + 75 * 3.0 + 100 * 3.5 + (unit - 225) * 4;
        cost = cost * 1.20;
    }

    printf("The Electricity bill is %g", cost);

    return 0;
}
