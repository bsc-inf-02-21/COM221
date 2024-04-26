#include<iostream>
using namespace std;

int main() {
    int rows, columns;

    // Prompt the user for the dimensions of the 2D array
    cout << "Enter the number of rows (max 3): ";
    cin >> rows;
    if (rows > 3) {
        cout << "Dimensions cannot exceed 3." << endl;
        //setting rows to 3
        rows = 3;
    }
    cout << "Enter the number of columns maximum of 3: ";
    cin >> columns;
    if (columns > 3) {
        cout << "Dimensions cannot exceed 3." << endl;
        // Setting columns to 3.
        columns = 3;
    }
    // Dynamically allocate memory for the 2D array
    double* array2D = new double[rows * columns];
    // Assign values to each element of the array using nested for loops
    cout << "Enter the values for the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> array2D[i * columns + j];
        }
    }
    // Output the values of each element of the array
    cout << "Values of the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << array2D[i * columns + j] << " ";
        }
        cout << endl;
    }

    // Free memory
    delete[] array2D;
    return 0;
}
