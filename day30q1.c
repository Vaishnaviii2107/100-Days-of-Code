#include <stdio.h>

int main()
{
    int n; 
    printf("Enter n: ");
    scanf("%d",&n);
    
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf ("%d", &arr[i]);
    }
    int countEven = 0;
    int countOdd = 0; 
    
    for (int i=0; i<n; i++) {
        if (arr[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }
    
    
    printf("Even = %d,Odd = %d",countEven, countOdd);

    return 0;
}