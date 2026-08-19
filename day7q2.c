#include <stdio.h>

int main () {
   // Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
char ch;
printf ("Enter your char, to check: ");
scanf ("%c", &ch);

if (ch >= 'a' && ch <= 'z') {
    if (ch == 'a' || ch== 'e' || ch =='i' || ch == 'o' || ch == 'u') {
        printf ("is a vowel");
    } else {
        printf ("is a consonant");
    }
} else if (ch >= 'A' && ch <= 'Z') {
    if (ch == 'A' || ch== 'E' || ch =='I' || ch == 'O' || ch == 'U') {
        printf ("is a vowel");
    } else {
        printf ("is a consonant");
    }
} else {
    printf ("underdefined");
}

    return 0;
}