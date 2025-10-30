#include <stdio.h>

int main() {
    int x, y;
    long long power = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (y): ");
    scanf("%d", &y);

    for (int i = 1; i <= y; i++) {
        power = power * x;
    }

    printf("%d^%d = %lld\n", x, y, power);

    return 0;
}

