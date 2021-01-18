
#include<stdio.h>

int main(){
    int n = 10;
    int sign = 1;
    double x = 0.2;
    double p = 1.0, q = 1.0, s_cos = 0.0;

    for(int i = 2; i <= n; i++){
        s_cos += sign * p/q ;
        p *= x * x;
        q = (2 * i - 2)*(2 * i - 3);
        sign *= -1;
        //printf("i= %d, p = %g, q = %g, s_pi = %g\n", i, p, q, s_cos);
    }

    printf("s_cos = %g", s_cos);

    return 0;
}



