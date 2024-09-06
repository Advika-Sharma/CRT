#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    // Input the matrix elements
    cout << "Enter all elements of the matrix (row-wise):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Output the entered matrix
    cout << "The entered matrix is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Create and display the mirror image of the matrix
    cout << "The mirror image of the matrix is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = cols - 1; j >= 0; j--) {  // Reverse the columns
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
