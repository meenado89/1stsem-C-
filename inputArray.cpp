#include <iostream>
using namespace std;
// USER INPUT FOR INDEX AND ONE ELEMENT THEN MULTIPLY
// int main() {
//     int index;
//     int element;

//     cout << "Enter the size of the array: ";
//     cin >> index;

//     cout << "Enter the starting element: ";
//     cin >> element;

//     int array[index];
//     for (int i = 0; i < index; i++) {
//         array[i] = element * i;
//     }
//     for (int i = 0; i < index; i++) {
//         cout << "array[" << i << "] = " << array[i] << endl;
//     }
//     return 0;
// }

// USER INPUT FOR INDEX AND THEN INPUT FOR EACH ELEMENT(SIRS)
int main() {
    int rows, cols;

    // Get the size of the array
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    // Declare the 2D array
    int arr[rows][cols];

    // Input elements
    cout << "Enter " << rows * cols << " elements:" << endl;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Print the array
    cout << "The array is:" << endl;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

       return 0;
}


