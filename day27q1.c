#include <stdio.h> 

int main () {
   /* Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

*/
int n=5; 
for (int i=0; i<n; i++) {
    // stars 
    for (int j=0; j<(2*i+1); j++) {
        printf ("*"); 
    }
    printf("\n"); 
}

for (int i=(n-1); i>0; i--) { // 4
    // stars 
    for (int j=(2*i-1); j>0; j--) {
        printf("*"); 
    }
    printf("\n"); 
}

    


    return 0; 
}