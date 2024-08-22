#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int firstRowSum = 0;

    for(int j = 0; j < 3; j++) {
        firstRowSum += arr[0][j];
    }

    cout << "Sum of the first row: " << firstRowSum << endl;

    cout << "\nOriginal Matrix is :" << endl;
    for(int e = 0; e < 3; e++) {
        for(int f = 0; f < 3; f++) {
            cout << arr[e][f] << " ";
        }
        cout << endl;
    }

    cout << "\nTransposed of the Matrix is :" << endl;
    for(int e = 0; e < 3; e++) {
        for(int f = 0; f < 3; f++) {
            cout << arr[f][e] << " ";
        }
        cout << endl;
    }

    return 0;
}

