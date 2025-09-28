#include <stdio.h>
int main(){

    float cel,fah;

    printf("Enter the temperature in celsius:");
    scanf("%f", &cel);
    fah = (cel*9/5)+32;
    printf("Fahrenheit value: %.2f", fah);

    return 0;
}
