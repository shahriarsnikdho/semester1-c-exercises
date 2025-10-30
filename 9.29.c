#include <stdio.h>
int main() {
    int n;
    long long a = 0, b = 1, next;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Fibonacci numbers up to %d: ", n);
    while(a <= n) {
        printf("%lld ", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}

