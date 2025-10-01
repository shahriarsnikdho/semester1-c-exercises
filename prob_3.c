#include <stdio.h>
// perimeter of rectangle
int main()
{

    int length,width;
    float perimeter;

    printf("Enter length:");
    scanf("%d", &length);

    printf("Enter width:");
    scanf("%d", &width);

    perimeter = 2*(length + width);

    printf("Perimeter of the rectangle: %f", perimeter);


    return 0;
}