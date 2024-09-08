#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }

    int* even = new int[evenCount];
    int* odd = new int[oddCount];
    int evenIndex = 0, oddIndex = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] % 2 == 0) {
                even[evenIndex++] = arr[i][j];
            } else {
                odd[oddIndex++] = arr[i][j];
            }
        }
    }

    cout << "Even Numbers: ";
    for (int i = 0; i < evenIndex; i++) {
        cout << even[i] << " ";
    }
    cout << endl;

    cout << "Odd Numbers: ";
    for (int i = 0; i < oddIndex; i++) {
        cout << odd[i] << " ";
    }
    cout << endl;

    delete[] even;
    delete[] odd;

    return 0;
}


