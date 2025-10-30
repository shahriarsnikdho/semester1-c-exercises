#include <stdio.h>
int main() {
    int n, oct[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while(n > 0) {
        oct[i] = n % 8;
        n /= 8;
        i++;
    }

    printf("Octal: ");
    for(i = i - 1; i >= 0; i--)
        printf("%d", oct[i]);
    return 0;
}

