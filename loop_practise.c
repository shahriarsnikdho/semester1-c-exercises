/*#include<stdio.h>
int main()
{

    //loop_practise(for)

    /*int i;

    for( i=1; i<=5; i++){
        printf("Value of i %d\n",i);
    }
    */

    /*int i=1;

    while( i<=5){
        printf("Value of i %d\n",i);
        i++;
    }
    */

    /* int i,j;

     for(i=1; i<=3; i++){
         for(j=1; j<=4; j++){
             printf("%d ",j);
         }
         printf("\n");
     }
     */



/*
        int i, j;

        for(i = 1; i <= 5; i++)           // Outer loop → 5 rows
        {
            for(j = 1; j <= i; j++)
                printf("* ");             // Print star
            }
            printf("\n");
        }

    return 0;
}

*/



/*#include <stdio.h>
int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {         // rows
        for(j = 1; j <= i; j++) {     // columns depend on row number
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
*/
/*
#include <stdio.h>
int main() {
    int i, j;

    for(i = 1; i <= 10; i++) {           // Outer loop: rows
        for(j = 1; j <= 10; j++) {       // Inner loop: columns
            printf("%2d", i * j);        // print i*j result
        }
        printf("\n");
    }

    return 0;
}
*/

// Pyramid Pattern
/*
#include<stdio.h>

int main()
{

    int i,j,space,n;

    printf("Enter number of row: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for (space=1; space<= n-i; space++)  //Row 1 এ বেশি space
        {
            printf(" ");
        }

        for(j=1; j<= 2*i-1; j++) // Row 1 → 2*1 - 1 = 1 star
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
*/

// Multiplication Table for loop
/*
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nMultiplication Table of %d:\n", n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}


// Multiplication Table for nested loop

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 10; i++) {
        printf("\n--- Table of %d ---\n", i);

        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
*/

// Hollow pyramid using loop

/*
#include <stdio.h>
int main() {

    int i, j, space, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {                       // Row loop

        for(space = 1; space <= n - i; space++) {   // Leading spaces
            printf(" ");
        }

        for(j = 1; j <= 2*i - 1; j++) {             // Star or space
            if(j == 1 || j == 2*i - 1 || i == n)
                printf("*");                        // Border stars
            else
                printf(" ");                        // Hollow inside
        }

        printf("\n");                               // Next row
    }

    return 0;
}
*/


