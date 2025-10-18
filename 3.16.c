#include<stdio.h>
#include<math.h>

int main(){

    double n,result;

    printf("Enter any number:");
    scanf("%lf", &n);

    result = exp(n);

    printf("exp(%.3lf) =%.3lf\n",n,result);


    return 0;
}

