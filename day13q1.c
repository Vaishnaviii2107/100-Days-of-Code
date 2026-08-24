#include <stdio.h>

int main () {
// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/ 
int a, b, op;
printf("Enter a, b, op: ");
scanf("%d, %d, %c", &a, &b, &op); 

switch (op) {
    case '+' : 
    printf ("%d", a+b); 
    break; 

     case '-' : 
    printf ("%d", a-b); 
    break; 

     case '*' : 
    printf ("%d", a*b); 
    break; 

     case '/' : 
      if (b != 0) {
    printf ("%d", a/b); 
    break; 
    } else {
        printf ("Not Defined\n"); 
    }

    case '%' : 
      if (b != 0) {
    printf ("%d", a%b); 
    } else {
        printf ("Not Defined\n"); 
    }
    break; 

    default: 
    printf ("Invalide case"); 
}



    return 0;
}