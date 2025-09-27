#include <stdio.h>
int main(){

    float a,b,div;

    printf("Enter two numbers:\n");
    scanf("%f %f", &a,&b);
    div = a/b;
    printf("div= %.2f\n", div);

    return 0;
}
