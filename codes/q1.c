#include <stdio.h>

int main() {

    int n = 2;

    printf("Line: %d, n = %d\n", __LINE__, n);
    while(printf("Line: %d, n = %d\n", __LINE__, n), n) {
    printf("Line: %d, n = %d\n", __LINE__, n--);
    }
    printf("Line: %d, n = %d\n", __LINE__, n);

 return 0;
}
/**OUTPUT
Line: 7, n = 2
Line: 8, n = 2
Line: 9, n = 2
Line: 8, n = 1
Line: 9, n = 1
Line: 8, n = 0
Line: 11, n = 0
**/
