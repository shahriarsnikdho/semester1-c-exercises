#include <stdio.h>
#include <math.h>

int main()
{

    int a;
    int b;
    double power;

    scanf("%d %d", &a, &b);

    power = pow(a, b);

    printf("%f\n", power);

    return 0;
}