#include <stdio.h>
#include <math.h>

int main(){

    double n, result;

    printf("Enter a value for n (-1 to 1): ");
    scanf("%lf", &n);

    result = asin(n)* (180 / M_PI);

    printf("sin inverse(%.2lf) = %.4lf\n", n, result );


    return 0;
}

