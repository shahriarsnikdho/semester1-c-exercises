#include <stdio.h>
int main(){

    int a,b,remainder;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    remainder = a%b;
    printf("Remainder of this two numbers: %d\n", remainder);


    return 0;
}
