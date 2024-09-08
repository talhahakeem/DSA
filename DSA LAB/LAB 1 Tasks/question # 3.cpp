#include <iostream>
using namespace std;

int main() {
    int arr[3][2] = {{1, 6}, {3, 8}, {5, 7}};
    int searchValue = 8;
    bool found = false;
    int sum = 0;

    // Search for a specific value
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            if(arr[i][j] == searchValue) {
                found = true;
            }
            sum += arr[i][j];
        }
    }

    // Display search result
    if(found) {
        cout << "Value " << searchValue << " found in the array." << endl;
    } else {
        cout << "Value " << searchValue << " not found in the array." << endl;
    }

    // Display values greater than 5
    cout << "Values greater than 5 in the array: ";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            if(arr[i][j] > 5) {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;

    // Display sum of all values
    cout << "Sum of all values in the array: " << sum << endl;

    return 0;
}

