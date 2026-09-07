#include <stdio.h> 
#include <limits.h>

int main() {
   // Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/


int n; 
printf("Enter size of array: "); 
scanf ("%d", &n); 

int arr[n]; 
for(int i=0; i<n; i++) {
    scanf("%d", &arr[i]);
} 
int MAX = INT_MIN; 
int MIN = INT_MAX; 

for (int i=0; i<n; i++) {
    MAX = MAX > arr[i] ? MAX : arr[i]; 
    MIN = MIN < arr[i] ? MIN : arr[i]; 
}
printf("MAX = %d, MIN = %d", MAX, MIN); 
    return 0; 
}