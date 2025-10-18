#include<stdio.h>
#include<math.h>

int main(){

    double t, result;

    printf("Enter any angel in Degrees:");
    scanf("%lf", &t);

    result = 1/sin (t * (M_PI/180));

    printf("cosec(%.2lf) = %.4lf", t,result);

    return 0;
}
