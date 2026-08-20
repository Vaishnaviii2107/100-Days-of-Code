#include <stdio.h>

int main () {
   // Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
int n; 
printf ("Enter n: "); 
scanf ("%d", &n);
 switch(n) {
    case 1: 
    printf("Januray, 31Days"); 
    break;

     case 2: 
    printf("Feburary, 28Days"); 
    break;

     case 3: 
    printf("march, 31Days"); 
    break;

     case 4: 
    printf("April, 30Days"); 
    break;

     case 5: 
    printf("May, 31Days"); 
    break;

     case 6: 
    printf("June, 30Days"); 
    break;

     case 7: 
    printf("July, 31Days"); 
    break;

     case 8: 
    printf("August, 30Days"); 
    break;

     case 9: 
    printf("September, 31Days"); 
    break;

     case 10: 
    printf("October, 30Days"); 
    break;

     case 11: 
    printf("November, 31Days"); 
    break;

     case 12: 
    printf("December, 30Days"); 
    break;

 }


    return 0; 
}