#include<stdio.h>
int main(){

    int num1, num2;

    printf("Enter Number 1:");
    scanf("%d", &num1);
    printf("Enter Number 2:");
    scanf("%d", &num2);

    (num1>num2)? printf("%d is the maximum", num1): printf("%d is the maximum", num2) ;

    return 0;
}
