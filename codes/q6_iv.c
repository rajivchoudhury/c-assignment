
#include<stdio.h>

int main(){
    int n = 10;
    int sign = 1;
    double x = 0.2;
    double p = 1.0, q = 1.0, s_l = 0.0;

    for(int i = 1; i <= n; i++){
        p *= x;
        q = i;
        s_l += sign * p/q ;
        printf("i= %d, p = %g, q = %g, s_pi = %g\n", i, p, q, s_l);
        sign *= -1;
    }

    printf("s_pi = %g", s_l);

    return 0;
}

