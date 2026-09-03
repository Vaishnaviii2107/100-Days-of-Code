#include <stdio.h>

int main()
{
    // To print triangle in upwards numbers 
    int n = 5;
    for (int i=0; i<n; i++) {
        for (int j=n; j>(n-i-1); j--) {
            printf ("%d",j);
        }
        printf ("\n");
    }

    return 0;
}