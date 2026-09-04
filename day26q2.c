#include <stdio.h> 

int main () {
    
    int n; 
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i=0; i<n; i= i+2) { 
        for (int j=0; j<(i+1); j++) {
            printf ("*\n");
        }
        printf ("\n");
    }

    for (int i=(n-2); i>0; i= i-2) {
        for (int j=0; j<i; j++) {
            printf ("*\n");
        }
        printf ("\n"); 
    }
    return 0; 
}