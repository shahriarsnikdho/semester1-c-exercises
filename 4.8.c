#include <stdio.h>
int main() {

    int mark;

    printf("Enter your mark:");
    scanf("%d", &mark);

    if(mark < 33){
        printf("FAIL");
    }
    else{
        printf("PASS");
    }

    return 0;
}


