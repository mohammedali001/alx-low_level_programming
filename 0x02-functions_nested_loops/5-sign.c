#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        printf("+");
        return 1;
    } else if (n < 0) {
        printf("-");
        return -1;
    } else {
        printf("0");
        return 0;
    }
}

int main() {
    int num = 42;
    int sign = print_sign(num);
    printf("\nSign: %d\n", sign);

    return 0;
}
