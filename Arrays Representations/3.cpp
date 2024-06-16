/************ 2D ARRAY **********/
#include <iostream>

using namespace std;

int main() {
    // Declaring a 2D array with 3 rows and 4 columns
    int array[3][4] = {
        {1, 2, 3, 4},   // Row 0
        {5, 6, 7, 8},   // Row 1
        {9, 10, 11, 12} // Row 2
    };

    // Accessing elements in the 2D array
    cout << "Element at [0][0]: " << array[0][0] << endl;
    cout << "Element at [2][3]: " << array[2][3] << endl;

    // Using nested loops to print all elements of the 2D array
    cout << "All elements of the array:" << endl;
    for (int i = 0; i < 3; ++i) {          // Loop over rows
        for (int j = 0; j < 4; ++j) {      // Loop over columns
            cout << array[i][j] << " ";
        }
        cout << endl;                      // Newline after each row
    }

    return 0;
}
