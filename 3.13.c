#include <stdio.h>
#include <math.h>

int main(){

    double n, result;

    printf("Enter a value for n : ");
    scanf("%lf", &n);

    result = asin(1 / n)* (180 / M_PI);

    printf("cosec inverse(%.2lf) = %.4lf\n", n, result );

    return 0;
}

