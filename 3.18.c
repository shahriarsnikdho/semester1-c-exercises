#include<stdio.h>
#include<math.h>

int main(){

    double n,result;

    printf("Enter any number:");
    scanf("%lf", &n);

    result = log10(n);

    printf("log10(%.3lf) = %.4lf\n", n, result);


    return 0;
}

