#include <stdio.h> 

int main () {
// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
int n; // 12321
printf ("Enter n, to check whether it's a Palindrome number or or not: ");
scanf ("%d", &n); 

int original = n;  // here we did it, cuz once the while loop will end, n = 0, ans if we compare ans and n, we will get not a palindrome, so to aavoid it, we made a new int vriable stooring the n value to compare it for later 
int ans = 0; 

while (n>0) {
    int lastDig = n % 10; // 1
    ans = ans * 10 + (lastDig);
    n = n / 10; // 1232
}
if (ans == original) {
    printf ("Palindrome Number");
} else {
    printf ("Not a palindrome Number");
}
    return 0; 
}