#include<stdio.h>
int main(){

    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    (mark >= 33) ? printf("Pass!") : printf("Fail!");

    return 0;
}

