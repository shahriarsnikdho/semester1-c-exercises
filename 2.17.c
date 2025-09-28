#include <stdio.h>
int main(){

    int n,result;

    printf("Enter any number:");
    scanf("%d", &n);
    result = (n<<2) + n;
    printf("%d", result);

    return 0;
}

