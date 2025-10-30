#include <stdio.h>

int main() {
    int decimal, remainder;
    char hex[50];
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("Hexadecimal: 0\n");
        return 0;
    }

    while (decimal != 0) {
        remainder = decimal % 16;

        if (remainder < 10)
            hex[i] = remainder + 48;
        else
            hex[i] = remainder + 55;

        i++;
        decimal = decimal / 16;
    }

    printf("Hexadecimal: ");

    while (i > 0) {
        i--;
        printf("%c", hex[i]);
    }

    printf("\n");

    return 0;
}

