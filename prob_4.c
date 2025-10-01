#include <stdio.h>
int main()
{

    float n,cube;

    printf("Enter any number:");
    scanf("%f", &n);

    cube = n*n*n;

    printf("Cube of n is %.2f", cube);

    return 0;
}