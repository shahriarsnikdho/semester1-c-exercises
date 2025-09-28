#include <stdio.h>
int main(){

    int a,b,result;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    result = a ^ b;
    printf("Bitwise XOR of two numbers: %d", result);

    return 0;
}
