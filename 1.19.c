#include <stdio.h>
int main(){

    char st[50];

    printf("In which university are you studying? \n");
    fgets(st, sizeof(st), stdin);
    printf("Answer: %s\n", st);


    return 0;
}
