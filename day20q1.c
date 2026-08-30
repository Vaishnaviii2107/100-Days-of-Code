#include <stdio.h> 

int main () {
    // Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/ 
int n; // 12345
printf ("Enter n, to get their odd digits multiplication: ");
scanf ("%d", &n);
int product = 1; 

while (n>0) {
    int lastDig = n % 10; // 5
    if (lastDig % 2 != 0) {
        product = product * lastDig; 
    }
    n = n / 10; 
}
printf ("%d", product); 

    return 0; 
}