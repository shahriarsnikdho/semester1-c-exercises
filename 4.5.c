#include<stdio.h>
int main(){

    int num1, num2, min;

    printf("Enter Number 1:");
    scanf("%d", &num1);
    printf("Enter Number 2:");
    scanf("%d", &num2);

    if (num1<num2)

        min = num1;
    else

        min = num2;

    printf("%d is the maximum", min);

    return 0;
}
