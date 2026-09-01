#include <stdio.h> 

int main () {
    // write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ..... up to n terms. (till 2 decimal digits)
    int n;
    printf ("Enter n, to get the sum of the series till n: ");
    scanf ("%d", &n);
    float sum = 0; 

    for (int i=1; i<=n; i++) {
        sum = sum + (float)(2*i) / (4*i - 1);
    }
    printf ("Approximate sum is: %.2f", sum);
    return 0; 
}