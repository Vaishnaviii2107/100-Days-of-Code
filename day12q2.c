#include <stdio.h> 

int main () {
   /* Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/



    int n; 
    printf ("Enter units consumed: ");
    scanf("%d",&n);

    if (n<=100) {
        printf ("Bill = Rs  %d",5*n);
    } else if (n<=200) {
        printf ("Bill = Rs %d",(5*100)+(7*(n-100)));
    } else if (n<=300) {
        printf ("Bill = Rs %d",(5*100)+(7*100)+(10*(n-200)));
    } else if (n<=400) {
        printf ("Bill = Rs %d",(5*100)+(7*100)+(10*100)+(12*(n-300)));
    }


    return 0; 
}