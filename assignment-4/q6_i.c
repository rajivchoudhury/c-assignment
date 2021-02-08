#include<stdio.h>

int main(){
    int n = 10;

    double p = 1.0, q = 1.0, s_1 = 0.0;

    for(int i = 1; i <= n; i++){
        q = i;
        s_1 += p/q ;
        //printf("i= %d, p = %g, q = %g, s_1 = %g\n", i, p, q, s_1);
    }

    printf("s_1 = %g", s_1);

    return 0;
}
