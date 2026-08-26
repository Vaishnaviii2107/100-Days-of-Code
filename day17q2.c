#include <stdio.h> 
#include <stdbool.h>

int main () {
/*Q34: Write a program to check if a number is prime.
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
int n; 
printf ("Enter n to check whether it's prime or non-prime: "); 
scanf ("%d", &n); 
bool isPrime = true; 

for (int i=2; i*i<=n; i++) {
    if (n % i == 0) {
        isPrime = false; 
        break; 
    }
}
if (isPrime == true) {
    printf ("Prime Number");
} else if (isPrime == false ) {
    printf ("Not a prime number"); 
}

    return 0; 
}