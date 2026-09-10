#include <stdio.h>

int main () {
    // merge two arrays
    int n1; 
    printf("Enter n1, the size of the array: "); 
    scanf("%d", &n1); 

    int arr1[n1]; 
    for (int i=0; i<n1; i++) {
        scanf("%d", &arr1[i]); 
    }

    int n2; 
    printf("Enter n2, the size of the array: "); 
    scanf("%d", &n2); 

    int arr2[n2]; 
    for (int i=0; i<n2; i++) {
        scanf("%d", &arr2[i]); 
    }

    for (int i=0; i<(n1); i++) {
        printf("%d ", arr1[i]);
    }
    for (int i=0; i<(n2); i++) {
        printf("%d ", arr2[i]);
    }


    return 0; 
}