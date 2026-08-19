#include <stdio.h> 
#include <math.h>

int main () {
   // Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
// simple interest = (p*r*t)/100
// compund interest = A=P(1+((r/100)^t)) - p 
/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5     */
int P,R,T;
printf ("Enter P, R, T: ");
scanf ("%d, %d, %d", &P, &R, &T);
printf("Simple interest= %d\n", ((P*R*T)/100));
printf ("Compound interest = %.1f", ( P * pow(1 + ((R / 100.0)), T) - P)); // **************

    return 0; 
}