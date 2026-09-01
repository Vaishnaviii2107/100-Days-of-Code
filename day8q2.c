#include <stdio.h> 

int main () {
   // Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
   // using ternary operators 
   void ternaryOp () {
      int a, b, c; 
      int Largest = (a > b ? a > c ? a : c : b > c ? b: c);
   } 
   printf ("%d", Largest); 
}


int a,b,c; 
printf ("Enter a , b , c: ");
scanf ("%d , %d , %d", &a , &b , &c);
if (a>b && a>c) {
    printf("The largest amongest the given is = %d", a);
} else if (b>a && b>c) {
    printf("The largest amongest the given is = %d", b);
} else {
    printf("The largest amongest the given is = %d", c);
}
    return 0;
}

