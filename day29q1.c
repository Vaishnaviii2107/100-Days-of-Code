#include <stdio.h> 

int main() {
   // Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20
*/
int n; 
printf("Enter size of array: "); 
scanf ("%d", &n); 

int arr[n]; 
for(int i=0; i<n; i++) {
    scanf("%d", &arr[i]);
} 

int sum = 0; 
for(int i=0; i<n; i++) {
    sum = sum + arr[i];
} 
printf("Sum is: %d", sum); 
    return 0; 
}