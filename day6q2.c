#include <stdio.h> 

int main () {
   // Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
int a; 
printf ("Enter a to check whether its pos, neg or zero: ");
scanf ("%d", &a);
if (a>0) {
    printf ("is a positive number\n");
} else if (a==0) {
    printf ("is zero\n");
} else {
    printf ("is a negative number\n");
}
printf ("the value stored in a is = %d\n", a); 
    return 0;
}