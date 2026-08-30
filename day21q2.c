#include <stdio.h>

int main () {
    // Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

    int n; 
    printf ("Enter n, to know whether it's a perfect no or not: "); 
    scanf ("%d", &n); 
    int sum = 0; 

    for (int i=1; i<n; i++) {
        if (n % i == 0) {
            sum = sum + i; 
        }
    }

    if ( sum == n ) {
        printf ("Is a perfect Number"); 
    } else {
        printf ("Not a perfect Number"); 
    }
    return 0; 
}