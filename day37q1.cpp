#include <iostream> 
using namespace std; 


int main () {
    // find the sum of each row of a matrix and store it in an array 
    int rows, columns; 
    cin >> rows >> columns; 
    int arr[10][10]; 
    int sum = 0; 
    int arrAns[10]; 


    // for taking inputs 
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            cin >> arr[i][j]; 
        }
    }
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            sum = sum + arr[0][j]; 
        }
    }
    cout << sum; 



    return 0; 
}

#include <stdio.h>

// int main()
// {
//     int n; // no of rows 
//     int m; // no of columns 
//     scanf("%d, %d", &n, &m); 
    
//     int arr[n][m]; 
//     for (int i=0; i<n;i++) {
//         for(int j=0; j<m; j++) {
//             scanf("%d", &arr[i][j]); 
//         }
//         printf("\n"); 
//     }
    
//     int arr1[n]; 
//     int sum = 0; 
//     int k = 0; 
//     while (k<n) {
//         for(int j=0; j<m; j++) {
//             sum = sum + arr[k][j];
//         }
//         arr1[k] = sum; 
//         k++;
//         sum = 0; 
//     }
    
//     for (int i=0; i<n; i++) {
//         printf("%d ", arr1[i]); 
//     }
    
   
    
//     return 0;
// }
