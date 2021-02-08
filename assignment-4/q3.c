#include <stdio.h>

int main() {
    int n = 2;

    printf("Line: %d, n = %d\n", __LINE__, n);
    for (
    printf("Line: %d, n = %d\n", __LINE__, n);
    printf("Line: %d, n = %d\n", __LINE__, n), n;
    printf("Line: %d, n = %d\n", __LINE__, n), n--
    ) {
    printf("Line: %d, n = %d\n", __LINE__, n);
    }
    printf("Line: %d, n = %d\n", __LINE__, n);

    return 0;
}
/**OUTPUT
Line: 6, n = 2
Line: 8, n = 2
Line: 9, n = 2
Line: 12, n = 2
Line: 10, n = 2
Line: 9, n = 1
Line: 12, n = 1
Line: 10, n = 1
Line: 9, n = 0
Line: 14, n = 0
**/
