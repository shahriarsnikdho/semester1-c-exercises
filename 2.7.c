#include <stdio.h>
int main(){

    float rad,area,pie;
    pie = 3.1416;

    printf("Enter radius of a circle:");
    scanf("%f", &rad);
    area = pie*rad*rad;
    printf("Area of the circle is: %.5f", area);


    return 0;
}
