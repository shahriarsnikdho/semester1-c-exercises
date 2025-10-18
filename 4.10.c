#include <stdio.h>
int main() {

    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if (mark >= 80 && mark <= 100){
        printf("First Division\n");
    }
    else if (mark >= 60 && mark < 80){
        printf("Second Division\n");
    }
    else if (mark >= 33 && mark < 60){
        printf("Third Division\n");
    }
    else{
        printf("FAIL");
    }

    return 0;
}

