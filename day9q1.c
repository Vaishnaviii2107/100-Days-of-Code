#include <stdio.h> 
#include <math.h>

int main () {
   // Q17: Write a program to find the roots of a quadratic equation and categorize them.
/*
Sample Test Cases:
Input 1:
1 -3 2 // ARE COEFFICENTS OF THE QUADRATIC EQUATION 
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex
*/
int a, b, c; 
printf ("Enter a, b, c: "); 
scanf("%d, %d, %d", &a, &b, &c); 
int D = pow(b, 2) - (4*a*c); 
int root1 = ((-b) - sqrt(D))/ (2*a); 
int root2 = ((-b) + sqrt(D))/ (2*a); 
if (D>0) {
    printf ("Roots are real and Different = " ); 
    printf ("%d, %d", root1, root2);
} else if(D==0) {
    printf ("Roots are real and same = "); 
     printf ("%d, %d", root1, root2);
} else if (D<0) {
    printf ("Roots are complex"); 
     //  ("%f, %f", root1, root2); no need to calculate the complex roots as well 
}
    return 0; 
}