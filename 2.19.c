#include <stdio.h>
int main(){

    int n,result;

    printf("Enter a number:");
    scanf("%d", &n);
    result = n & 3;
    printf("Remainder: %d", result);


    return 0;
}
