#include<stdio.h>
#include<math.h>

int main(){

    double n,result;

    printf("Enter any number:");
    scanf("%lf", &n);

    result = sqrt(n);

    printf("sqrt(%.3lf) = %.3lf\n",n,result);


    return 0;
}
