#include <stdio.h> 

int main () {
   // Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
int year; 
printf ("Enter the year to check whether its a leap year or not: ");
scanf ("%d", &year);
if (year % 400 == 0) {
    printf ("is a leap year");
} else if (year % 100 == 0) {
    printf ("not a leap");
} else if ( year % 4 == 0) {
    printf ("is a leap year"); 
} else {
    printf ("not a leap year"); // when the year is not divisble by 4,100 and 400, eg -> 2023 
}
    return 0; 
}
// for a year to be leap year, it should 
// 1) divisble by 4, 100 and 400
// 2) divisble by 4 only, (not by 100 and 400). 
// if diviisible y 4 and 100  but not by 400, then not a leap year 
