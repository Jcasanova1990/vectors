#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initializing a 2D array
    int digits[3][3] = { {1, 2, 3},
                         {4, 5, 6}, 
                         {7, 8, 9} };

    // Calculate the number of rows and columns
    int row = sizeof(digits) / sizeof(digits[0]); // Number of rows
    int col = sizeof(digits[0]) / sizeof(int);    // Number of columns

    // Iterating through the 2D array with a standard nested for loop
    cout << "Iterating through the 2D array (standard for loop):" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (j == col - 1) {
                cout << digits[i][j] << endl; // Print without space at the end of the row
            } else {
                cout << digits[i][j] << " "; // Print with space between elements
            }
        }
    }

    // Iterating through the 2D array with an enhanced for loop
    cout << "\nIterating through the 2D array (enhanced for loop):" << endl;
    for (const auto &row : digits) { // 'row' is a reference to each sub-array
        for (int elem : row) {       // 'elem' is each element in the sub-array
            if (elem % 3 == 0) {
                cout << elem << endl; // Print without space at the end of the row
            } else {
                cout << elem << " ";  // Print with space between elements
            }
        }
    }

    return 0;
}
