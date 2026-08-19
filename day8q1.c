#include <stdio.h> 

int main () {
   // Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
char ch; 
printf ("Enter the char: ");
scanf("%c", &ch);
if (ch >= 'a' && ch <='z') {
    printf ("lowercase alphabet");
} else if ( ch >= 'A' && ch <= 'Z') {
    printf ("UPPERCASE ALPHABET");
} else if (ch >= 48 && ch <= 57) {
    printf ("Digit");
} else {
    printf ("Special character"); 
}

    return 0;
}