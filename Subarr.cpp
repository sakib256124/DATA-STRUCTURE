#include <iostream>
using namespace std;

int main() {
    int arr[6] = {12, 4, 43, 54, 234}; // Corrected array
    int n = sizeof(arr) / sizeof(arr[0]); // Correct size calculation
    cout << n << endl;

    int i;
    for (i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    return 0; // Properly end the program
} // Ensure main() is properly closed
