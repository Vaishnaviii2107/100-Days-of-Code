#include <stdio.h> 

int main () {
  //  Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010
*/
int n ; // 10
printf ("Enter n to convert it into it's binary form: ");
scanf ("%d", &n); 
int pow = 1; // 10^0
int ans = 0; 
while (n>0) {
    int rem = n % 2; // 0
    ans = ans + (rem*pow); 
    pow = pow * 10; 
    n = n / 2; //5
}
printf ("Ans : %d", ans );
    return 0; 
}