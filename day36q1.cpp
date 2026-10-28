#include <iostream> 
using namespace std; 

int main () {
    // read and print a matrix,
    int rows, columns; 
    cin >> rows >> columns; // 2 2
    int arr[10][10]; // we cant enter rows and columns directly, as we have to asign the values to the string size in compile itself and not in run time

    // taking input 
    for (int i=0; i<rows; i++) {
        for (int j=0; j<columns; j++) {
            cin >> arr[i] [j]; 
        }
    }
    // printing the matrix
    for (int i=0; i< rows; i++) {
        for (int j=0; j<columns; j++) {
            cout << arr[i] [j] << " "; 
        }
        cout << endl; 
    }
    return 0; 
}

// int main()
// {
//     int n; // no of rows 
//     int m; // no of columns 
//     scanf("%d, %d", &n, &m); // 2,3 
    
//     int arr[n][m]; 
//     for (int i=0; i<n;i++) {
//         for(int j=0; j<m; j++) {
//             scanf("%d", &arr[i][j]); 
//         }
//         printf("\n"); 
//     }
    
//     for (int i=0; i<n;i++) {
//         for(int j=0; j<m; j++) {
//             printf("%d", arr[i][j]); 
//         }
//         printf("\n"); 
//     }
    

//     return 0;
// }