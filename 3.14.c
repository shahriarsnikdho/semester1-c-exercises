#include<stdio.h>
#include<math.h>

int main(){

    double x,y,result;

    printf("Enter a number for x:");
    scanf("%lf", &x);

    printf("Enter a number for y:");
    scanf("%lf", &y);

    result = pow(x,y);

    printf("%.2lf^%.2lf = %.4lf\n", x, y, result);


    return 0;
}
