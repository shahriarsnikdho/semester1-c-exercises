#include <stdio.h>
int main() {
    int n, i, j, flag, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        flag = 0;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            count++;
    }
    printf("Total prime numbers = %d", count);
    return 0;
}

