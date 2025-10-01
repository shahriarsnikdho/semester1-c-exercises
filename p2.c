#include <stdio.h>
int main()
{

    int num1, num2, num3, num4, sum;

    printf("Enter number 1:");
    scanf("%d", &num1);

    printf("Enter number 2:");
    scanf("%d", &num2);

    printf("Enter number 3:");
    scanf("%d", &num3);

    printf("Enter number 4:");
    scanf("%d", &num4);

    sum = num1 + num2 + num3 + num4;

    printf("Sum of 4 Numbers is %d", sum);

    return 0;
}
