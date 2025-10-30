#include <stdio.h>
int main() {
    int n, i = 2, count = 0, j, flag;
    printf("Enter how many primes: ");
    scanf("%d", &n);

    while(count < n) {
        flag = 0;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            printf("%d ", i);
            count++;
        }
        i++;
    }
    return 0;
}

