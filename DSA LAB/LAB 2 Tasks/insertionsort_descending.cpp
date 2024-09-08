#include <iostream>
using namespace std;
void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (temp > arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
void displayarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6] = {12, 13, 2, 6, 3, 9};
    cout << "ARRAY ELEMENTS before SORTING: " << endl;
    displayarray(arr, 6);
    insertionsort(arr, 6);
    cout << endl;
    cout << "ARRAY ELEMENTS after DESCENDING ORDER: " << endl;
    displayarray(arr, 6);

    return 0;
}