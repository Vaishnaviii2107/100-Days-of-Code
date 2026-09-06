#include <stdio.h> 
#include <stdbool.h>


int main () {

   // Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
int n; 
printf("Enter n, to get prime numbers till n: "); 
scanf ("%d", &n); 

for (int i=2; i<=n; i++) {
    bool isPrime = true; 

    for (int j=2; j*j<=i; j++) { // for checking now n becomes i, we are chceking for i, so we will check till i, 
        if (i % j==0) {
            isPrime = false; 
            break; 
        }
    }
    if(isPrime== true) {
            printf ("%d ", i); 
    }
}



    return 0; 
}