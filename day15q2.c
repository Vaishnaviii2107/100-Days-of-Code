#include <stdio.h> 
#include <math.h>
int main () {
   // Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
int n; 
printf ("Enter n: ");
scanf("%d", &n); 

int ans = 0; 

while (n != 0) { // here we didnt take n>0, cuz then it will not work for the negative no 
int lastDig = n % 10; // 
ans = ans * 10 + lastDig; 
n = n / 10; 
}
printf ("%d", ans); 

    return 0; 
}