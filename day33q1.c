#include <stdio.h> 

int main() {
    // search in a sorted array using binary search

    int n; 
    printf("Enter n, size of array: "); 
    scanf("%d", &n); // 5

    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]); // 1 2 3 4 5
    }

    int target; 
    printf("Enter target:  "); 
    scanf("%d", &target); // 4
    
    int start = 0; 
    int end = n - 1; 
    int ans = -1; 
    while(start <= end) {
        int mid = start + (end - start) / 2; 
        if (target == arr[mid]) {
            ans = mid; 
            break; // if we will not break the loop, else if or else condition will not work once ans = mid, but the loop will return for infintiy cuz end and start will reamin same and while will never get terminate
        } else if(target < arr[mid]) {
            end = mid - 1; 
        } else {
            start = mid + 1; 
        }
    }
    printf("At index: %d", ans); 
    return 0; 
}