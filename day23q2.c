#include <stdio.h> 

int main () {
    // make a square pattern with 5 stars in  each row and column 
    int n = 5; 
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            printf ("*"); 
        } 
        printf("\n"); 
    }
    return 0; 
}