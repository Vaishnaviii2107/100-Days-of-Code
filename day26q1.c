#include <stdio.h> 

int main () {
    int n; 
    printf ("Enter n: ");
    scanf("%d", &n); 

    for (int i=0; i<n; i++) {
        // for spaces 
        for (int j=0; j<(n-i-1); j++) {
            printf(" "); 
        }
        // for numbers
        for (int j=n; j>(n-i-1); j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0; 
}