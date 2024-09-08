#include <iostream>
using namespace std;
int searchAndSum(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            int sum = 0;
            for (int i = 0; i <= mid; i++)
            {
                sum += arr[i];
            }
            return sum;
        }
        if (arr[mid] < x)
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
    int x;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "ARRAY ELEMENT ARE: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the Element you want to Search : ";
    cin >> x;
    int result = searchAndSum(arr, 10, x);
    if (result == -1)
    {
        cout << "Element not found in the array." << endl;
    }
    else
    {
        cout << "Sum of Array Elements upto and including  " << x << " is :" << result << endl;
    }
    return 0;
}