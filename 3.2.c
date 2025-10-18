#include<stdio.h>
#include<math.h>
int main(){

    double t,result;

    printf("Enter angel in degrees:");
    scanf("%lf", &t);

    result = sin(t * (M_PI/180));

    printf("sin(%.2lf) = %.4lf\n", t, result);

    return 0;
}
