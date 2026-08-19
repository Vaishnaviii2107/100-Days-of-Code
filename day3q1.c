#include <stdio.h>

int main () {
    // Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
// 1 celsius == 33.8 fahrenheit 
int Celsius; 
printf ("celsius = ");
scanf ("%d", &Celsius);
printf ("Fahrenheit = %.0f", (Celsius*9.0/5)+32);

    return 0;
}