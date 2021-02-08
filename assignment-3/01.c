/**1. Execute the following program considering x in { 0, 1, 5, 7, 10 } and y in { 0, 1 } . Realize
the causes of different outputs:**/

#include <stdio.h>
int main() {
    int n = 5;
    int condition = 1;
    if (n == 5) {
    printf("%d\n", __LINE__);//this line no is printed
    } else if (n % 2 == 0) { //As the above if was correct so it did not enter the else
    if (n == 10 && condition == 1) {
    printf("%d\n", __LINE__);
    } else {
    printf("%d\n", __LINE__);
    }
    printf("%d\n", __LINE__);
    } else if (condition) {
    printf("%d\n", __LINE__);
    } else if (0) {
    printf("%d\n", __LINE__);
    } else {
    printf("%d\n", __LINE__);
    }
    printf("%d\n", __LINE__);//finally this line no is printed
    return 0;
}
