#include <iostream>
using namespace std;
void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (temp < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int search(int arr[], int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, value, result;
    cout << "Enter the Size of the Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of the Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionsort(arr, n);
    cout << "ARRAY ELEMENTS after SORTING : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the Element YOu want to search in array: ";
    cin >> value;
    result = search(arr, n, value);
    if (result != -1)
    {
        cout << "Value is Found in array at index: " << result << endl;
    }
    else
    {
        cout << "Array Element not found in the array. ";
    }

    return 0;
}