
#include<stdio.h>

int main(){
    int n = 10;
    int sign = 1;
    double x = 0.2;
    double p = x, q = 1.0, s_sin = x;

    for(int i = 2; i <= n; i++){
        p *= x * x;
        q = (2 * i - 1)*(2 * i - 2);
        sign *= -1;
        s_sin += sign * p/q ;
        //printf("i= %d, p = %g, q = %g, s_pi = %g\n", i, p, q, s_sin);
    }

    printf("s_pi = %g", s_sin);

    return 0;
}



