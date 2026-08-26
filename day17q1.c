#include <stdio.h> 
#include <math.h>

int main () {
/*Q33: Write a program to check if a number is an Armstrong number.
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
int n;
printf ("Enter n to check whether it's a armstrong number or not: "); // 153
scanf ("%d", &n); 
int original = n; 
int original2 = n;
int count = 0;
int ans = 0;  
while (original>0) {
    original = original / 10; 
    count++; 
}
while (original2 > 0) {
    int lastDig = original2 % 10; 
    ans = ans + pow(lastDig, count); 
    original2 = original2 / 10; 
}
if (ans == n) {
    printf ("Armstrong No");
} else {
     printf ("Not a Armstrong No");
}

 return 0; 
}