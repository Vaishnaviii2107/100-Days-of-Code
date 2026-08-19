#include <stdio.h> 
#include <conio.h> 

int main () {
   // Q11: Write a program to input an integer and check whether it is even or odd using if–else.
/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd   */

int a; 
printf ("Enter a to check whether it's an odd or even number: ");
scanf ("%d", &a);
if (a % 2 == 0) {
    printf ("An even number");
} else {
    printf ("An Odd Number");
}

    return 0;
}