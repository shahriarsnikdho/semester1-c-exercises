#include <stdio.h>
int main ()
{
    int n, number1=0,number2=1,number3;

    printf("Enter a number: ");
    scanf("%d",&n);

        while(number1<n){

            number3 = number1+number2;
            number1 = number2;
            number2 = number3;
        }

    if (number1==n){

        printf("Fibonacci number\n");
    }

    else{
        printf("Not Fibonacci number\n");
    }

 return 0;
}

