
#include<stdio.h>

int main(){
    int n = 10;
    double x = 0.2;
    double p = 1.0, q = 1.0, s_e = 0.0;

    for(int i = 1; i <= n; i++){
        s_e += p/q ;
        //printf("i= %d, p = %g, q = %g, s_pi = %g\n", i, p, q, s_e);
        p *= x;
        q *= i;
    }

    printf("s_pi = %g", s_e);

    return 0;
}

