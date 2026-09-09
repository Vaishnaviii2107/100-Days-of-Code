#include <stdio.h>

int main () {
    // reverse an array 
    int n; 
    printf("Enter n, size of array: "); 
    scanf("%d", &n); 

    int arr[n];
    for (int i=0; i<n; i++) {
        scanf ("%d", &arr[i]); 
    }

    // 1 2 3 4
    int start = 0; 
    int end = n-1; 
    while(start < end) {
        arr[start] = arr[start] + arr[end]; 
        arr[end] = arr[start] - arr[end]; 
        arr[start] = arr[start] - arr[end]; 
        start++; 
        end--; 
    }  
    
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]); 
    }
    return 0; 
}