
#include<stdio.h>

int main(){
    int n = 10;
    int sign = 1;
    double p = 1.0, q = 1.0, s_pi = 0.0;

    for(int i = 1; i <= n; i++){
        q = 2 * i - 1;
        s_pi += sign * p/q ;
        //printf("i= %d, p = %g, q = %g, s_pi = %g\n", i, p, q, s_pi);
        sign *= -1;
    }
    s_pi = 4 * s_pi;

    printf("s_pi = %g", s_pi);

    return 0;
}

