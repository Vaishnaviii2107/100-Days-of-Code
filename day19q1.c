#include <stdio.h> 

int main () {
    //Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5

Output 1:
20

Input 2:
7 3
Output 2:
21

*/
int a, b;
int n; 
printf ("Enter a and b to get their LCM: ");
scanf ("%d, %d", &a, &b);

if (a > b)
 n = a;
else 
n = b;

while (1) { // 1 means true, so loop will run forever untill it statisfies the condition
    if (n % a == 0 && n % b == 0) {
        printf ("LCM is %d", n); 
        break;
    }
    n++; 
}
    return 0; 
}