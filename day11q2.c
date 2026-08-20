#include <stdio.h> 

int main () {
    // Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
int CP, SP; 
printf("Enter CP, SP : ");
scanf ("%d, %d", &CP, &SP);
if (SP>CP) {
    printf ("Profit = %d", ((SP-CP)*100)/CP);
} else if (SP<CP) {
    printf ("Loss = %d", ((CP-SP)*100)/CP); 
} else if (SP==CP) {
    printf ("No loss, No profit");
}

    return 0; 
}