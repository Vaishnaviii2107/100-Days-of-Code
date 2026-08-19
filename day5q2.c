#include <stdio.h> 
int main () {
    // Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1
*/
int hours, minutes, seconds; 
printf ("Enter the time in sec: "); // 3661 
scanf ("%d", &seconds);

hours = seconds / 3600;
seconds = seconds % 3600; // will give the remaining minutes basically, which is 61 seconds (or 1 min and 1 sec )

minutes = seconds / 60; 
seconds = seconds % 60; 

printf ("%d: %d: %d",hours, minutes, seconds);

    return 0;
}