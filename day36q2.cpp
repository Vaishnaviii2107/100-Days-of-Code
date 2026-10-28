#include <iostream> 
using namespace std; 


int main () {
    // find the sum of all elements of the matrix 
    int rows, columns; 
    cin >> rows >> columns; 
    int arr[10][10]; 
    int sum = 0; 

    // for taking inputs 
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            cin >> arr[i][j]; 
        }
    }

     for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
           sum = sum + arr[i][j]; 
        }
    }
    cout << "Sum is: " << sum << endl; 
    return 0; 
}


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
    
//     int sum = 0; 
//     for (int i=0; i<n;i++) {
//         for(int j=0; j<m; j++) {
//             sum = sum + arr[i][j]; 
//         }
//         // printf("\n"); 
//     }
//     printf("%d", sum); 
    
//     return 0;
// }