#include<stdio.h>
int main(){

    int a, b, c, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("Minimum number is: %d\n", min);

    return 0;
}

