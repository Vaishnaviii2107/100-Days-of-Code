#include <stdio.h> 

int main () {
    //Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
int a, b;
printf ("Enter a and b, to get their HCF: "); 
scanf ("%d, %d", &a, &b);
int HCF = 0; 

for (int i=1; i<=a; i++) {
    if (a%i == 0 && b%i == 0) {
        HCF = i; 
    }
}
printf ("HCF = %d", HCF); 
    return 0; 
}