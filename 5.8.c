#include<stdio.h>
int main(){

    int a, b, c, medium;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    medium = ( (a > b && a < c) || (a < b && a > c) ) ? a :
              ( (b > a && b < c) || (b < a && b > c) ) ? b : c;

    printf("%d is the Medium", medium);

    return 0;
}

