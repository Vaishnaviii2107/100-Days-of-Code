#include <stdio.h>

int main () {
    // Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145 // 1! + 4! + 5! = 145 
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
int n; 
printf ("Enter n, to know wether it's a strong number or not: "); 
scanf ("%d", &n); 
int sum = 0; 
int original = n; 

while ( original > 0) {
    int factorial = 1; 
    int lastDig = original % 10; // 5, 4, 1

    for (int i=1; i<=lastDig; i++) {
        factorial = factorial * i; // factorial of 5, 4, 1
    }
    sum = sum + factorial; 
    original = original / 10; 
}

if (sum == n) {
    printf ("Strong Number");
} else {
    printf ("Not a strong Number"); 
}
    return 0; 
}