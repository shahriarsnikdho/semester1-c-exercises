#include <stdio.h>
int main(){

    char n;
    printf("Enter any lowercase character:");
    scanf("%c", &n);
    printf("Equivalent of uppercase character: %c\n", n-32);

    return 0;
}
