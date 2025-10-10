#include <iostream>
using namespace std;

int main() {
    const int totalSubjects = 5;
    string subjects[totalSubjects] = {
        "Communicative Skills",
        "Programming C++",
        "Internet",
        "IT",
        "Test Engineering"
    };

    int marks[totalSubjects];
    int totalMarks = 0;
    int maxMarks = 30 * totalSubjects;

    cout << "=== MARKS ENTRY ===" << endl;

    for (int i = 0; i < totalSubjects; i++) {
        cout << "Enter marks for " << subjects[i] << " (out of 30): ";
        cin >> marks[i];
        totalMarks += marks[i];
    }

    float percentage = (float)totalMarks / maxMarks * 100;

    cout << "\n=== RESULTS ===" << endl;
    for (int i = 0; i < totalSubjects; i++) {
        cout << subjects[i] << ": " << marks[i] << " / 30" << endl;
    }

    cout << "-------------------" << endl;
    cout << "Total: " << totalMarks << " / " << maxMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
