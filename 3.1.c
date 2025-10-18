#include<stdio.h>
#include<math.h>
int main(){

    int n,result;

    printf("Enter a number:");
    scanf("%d", &n);

    result = abs(n);

    printf("The absolute value of n is: %d\n", result);

    return 0;
}
