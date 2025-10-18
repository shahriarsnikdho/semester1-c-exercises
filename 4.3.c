#include<stdio.h>
int main(){

    int num1, num2, max;

    printf("Enter Number 1:");
    scanf("%d", &num1);
    printf("Enter Number 2:");
    scanf("%d", &num2);

    if (num1>num2)

        max = num1;
    else

        max = num2;

    printf("%d is the maximum", max);

    return 0;
}
