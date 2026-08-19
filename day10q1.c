#include <stdio.h>

int main () {
   // Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
int a, b, c; // sides of the traingle 
printf("Enter the sides of the trinagle: "); 
scanf ("%d, %d, %d", &a, &b, &c); 
if (a==b && b==c) {
    printf ("Equilateral triangle"); 
} else if ((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a)) {
    printf ("Isoceles triangle ");
} else if (a!=b && b!=c) {
    printf ("Scalar triangle"); 
}

    return 0;
}
