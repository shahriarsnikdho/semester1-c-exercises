#include<stdio.h>
int main(){

    int num1, num2, num3;

    printf("Enter Number 1:");
    scanf("%d", &num1);
    printf("Enter Number 2:");
    scanf("%d", &num2);
    printf("Enter Number 3:");
    scanf("%d", &num3);


    if(num1>num2 && num1>num3){

        printf("%d is the maximum", num1);
    }
    else if(num2>num1 && num2>num3) {

        printf("%d is the maximum", num2);
    }
    else{

        printf("%d is the maximum", num3);
    }


    return 0;
}

