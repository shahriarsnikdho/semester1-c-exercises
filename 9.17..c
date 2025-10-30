#include <stdio.h>
int main() {
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        sum = 0;
        while(n != 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    } while(sum > 9);

    printf("Digital Root = %d", sum);
    return 0;
}

