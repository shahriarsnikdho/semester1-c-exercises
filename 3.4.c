#include<stdio.h>
#include<math.h>

int main(){

    double t, result;

    printf("Enter any angel in Degrees:");
    scanf("%lf", &t);

    result = tan (t * (M_PI/180));

    printf("tan(%.2lf) = %.4lf", t,result);

    return 0;
}
