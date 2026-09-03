#include <stdio.h>

int main()
{
    // to print inverted triangle 
    int n = 5;
    for (int i=0; i<n; i++) {
        // spaces 
        for (int j=0; j<i; j++) {
            printf (" ");
        }
        // stars
        for (int j=n-i; j>0; j--) {
            printf("*");
        }
        printf ("\n");
    }

    return 0;
}