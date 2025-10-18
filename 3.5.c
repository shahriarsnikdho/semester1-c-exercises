#include<stdio.h>
#include<math.h>

int main(){

    double t, result;

    printf("Enter any angel in Degrees:");
    scanf("%lf", &t);

    result = 1/tan (t * (M_PI/180));

    printf("cot(%.2lf) = %.4lf", t,result);

    return 0;
}

