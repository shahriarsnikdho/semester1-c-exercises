#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, D, root1, root2;

    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }

    D = b*b - 4*a*c;

    if(D > 0) {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are real and different: %.2lf , %.2lf\n", root1, root2);
    }
    else if(D == 0) {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal: %.2lf , %.2lf\n", root1, root2);
    }
    else {
        double realPart = -b / (2*a);
        double imagPart = sqrt(-D) / (2*a);
        printf("Roots are complex: %.2lf + %.2lfi , %.2lf - %.2lfi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

