#include <stdio.h>
int main(){

    float cel,fah;

    printf("Enter the temperature in Fahrenheit :");
    scanf("%f", &fah);
    cel = (fah - 32)*5/9;
    printf("celsius value: %.2f", cel);

    return 0;
}

