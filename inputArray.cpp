#include <iostream>
using namespace std;
// USER INPUT FOR INDEX AND ONE ELEMENT THEN MULTIPLY
int main() {
    int index;    
    int element;  

    cout << "Enter the size of the array: ";
    cin >> index;

    cout << "Enter the starting element: ";
    cin >> element;

    int array[index];
    for (int i = 0; i < index; i++) {
        array[i] = element * i; 
    }   
    for (int i = 0; i < index; i++) {
        cout << "array[" << i << "] = " << array[i] << endl;
    }
    return 0;
}

// USER INPUT FOR INDEX AND THEN INPUT FOR EACH ELEMENT 
  