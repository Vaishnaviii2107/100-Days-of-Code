#include <stdio.h> 

int main () {
// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
    int n; 
    printf ("Enter n to get the sum of it's digit: ");
    scanf ("%d", &n);

    int sum = 0;
    while (n>0) {
        int lastDig = n % 10;
        sum = sum + lastDig; 
        n = n / 10;
    } 
    printf ("Sum is: %d", sum);

    return 0; 

}