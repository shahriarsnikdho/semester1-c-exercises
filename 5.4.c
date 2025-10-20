#include<stdio.h>
int main(){

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    (a < b) ? printf("%d is minimum\n", a) : printf("%d is minimum\n", b);

    return 0;
}

