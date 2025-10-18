#include<stdio.h>
#include<math.h>

int main(){

    double n,result;

    printf("Enter any number:");
    scanf("%lf", &n);

    result = log(n);

    printf("log(%.3lf) = %.4lf\n", n, result);


    return 0;
}
