#include<stdio.h>
int main(){

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    (a > b) ? printf("%d is maximum\n", a) : printf("%d is maximum\n", b);

    return 0;
}


