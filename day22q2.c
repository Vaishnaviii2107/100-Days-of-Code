#include <stdio.h> 

int main ()  {
    // Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
int n; 
printf ("Enter n, to get it's get the sum of the series till n: "); 
scanf ("%d", &n); 
float sum = 0; 

for (int i=1; i<=n; i++) {
    if (i == 1) {
    sum = sum + 1; 
} else {
    sum = sum + (float)(2*i-1)/(2*i); // if i didnt use float, then 3/4 = 0, but while using float, its 3.0/4 = .75
    }
}
 printf ("Approximate Sum = %.1f", sum); 
    return 0; 
}