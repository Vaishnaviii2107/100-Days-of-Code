#include <stdio.h> 

int main () {
    /* Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

*/

int n = 4; 
for (int i=0; i<4 ; i++) {
    // upper triangle 
    // spaces 
    for (int j=0; j<(n-i-1); j++) {
        printf (" "); 
    }
    // stars (first one) 
    for (int j=0; j<(i+1); j++) {
        printf ("*"); 
    }
    // stars (second one )
    if (i!=0) {
        for (int j=0; j<i; j++) {
            printf ("*"); 
        }
    }
    printf ("\n"); 
}


// lower triangle
for (int i=2; i>=0; i--) {
    // spaces   
    for (int j=0; j<(n-i-1); j++) {
        printf (" "); 
    }
    // stars (first one) 
    for (int j=0; j<(i+1); j++) {
        printf ("*"); 
    }
    // stars (2nd one )
    if (i!=0) {
        for (int j=0; j<i; j++) {
            printf ("*"); 
        }
    }
    printf ("\n"); 
}
    return 0; 
}