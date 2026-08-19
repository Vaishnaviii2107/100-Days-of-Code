#include <stdio.h> 

int main () {
    // write a program to find an display the sum of the first n natural numbers 
    int n; 
    int sum = 0; 
    printf ("enter n: ");
    scanf ("%d", &n); // 5
    for (int i=1; i<=n; i++) {
        sum+=i;
    }
    printf ("Sum of first n natural numbers is = %d", sum);
    return 0; 
}