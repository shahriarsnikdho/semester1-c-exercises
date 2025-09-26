#include <stdio.h>
int main(){

    char n;
    printf("Enter any uppercase character:");
    scanf("%c", &n);
    printf("Equivalent of lowercase character: %c\n", n+32);

    return 0;
}
