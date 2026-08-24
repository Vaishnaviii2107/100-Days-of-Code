#include <stdio.h> 

int main () {
  //  Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:  3
Output 1:  9
*/
int n; 
printf ("Enter n: "); 
scanf ("%d", &n);

int sum = 0; 
for (int i=1; i<=n; i++) {
    sum = sum + (2*i - 1); 
}
printf ("Sum of n odd natural numbers: %d", sum);
    return 0; 
}