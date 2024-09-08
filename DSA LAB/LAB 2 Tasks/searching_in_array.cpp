#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, result;
    int arr[8] = {2, 5, 7, 9, 11, 13, 16, 18};
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the Value you want to Search in the Given ArraY: ";
    cin >> n;
    result = binarysearch(arr, 8, n);
    if (result != -1)
    {
        cout << " Array Element " << n << " is Found at index: " << result << endl;
    }
    else
    {
        cout << "Array Element not Found. ";
    }

    return 0;
}