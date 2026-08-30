#include <stdio.h> 
int main () {

    // Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
int n; 
printf ("Enter n, to swap it's first and last Dig: "); 
scanf ("%d",&n);  
int copy = n; 
int lastDig = copy % 10; // 4
int pow = 1; 

while (copy >= 0) {
    copy = copy / 10; 
    pow = pow * 10; 
}
int firstDig = copy; 
int midDigs = (n % pow) / 10; 

// lastDig = lastDig + firstDig;
// firstDig = lastDig - firstDig; 
// lastDig = lastDig - firstDig; 

int ans = lastDig * pow + midDigs * 10 + firstDig; 

    return 0; 
}