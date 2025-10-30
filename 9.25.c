#include <stdio.h>
int main() {
    int m, n, i, j, flag;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    for(i = m; i <= n; i++) {
        flag = 0;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0 && i > 1)
            printf("%d ", i);
    }
    return 0;
}

