#include <stdio.h>

int main () {
    // Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

int binNum; 
printf ("Enter binNum, to get it's 1's compliment:  "); 
scanf ("%d", &binNum);
int ans = 0; 
int pow = 1; 

while (binNum > 0) {
    int lastDig = binNum % 10; 
    ans = ans + ((!lastDig) * pow) ; 
    binNum = binNum / 10; 
    pow = pow * 10 ; 
}

printf ("1's compliment is: %d", ans); 

    return 0;
}