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
    int countPositive = 0;
    int countNegative = 0; 
    int countZero = 0; 
    
    for (int i=0; i<n; i++) {
        if (arr[i] > 0) {
            countPositive++;
        } else if (arr[i] < 0 ) {
            countNegative++;
        } else {
            countZero++;
        }
    }
    
    
    printf("Positive = %d, Negative = %d, Zero = %d",countPositive, countNegative, countZero);

    return 0;
}