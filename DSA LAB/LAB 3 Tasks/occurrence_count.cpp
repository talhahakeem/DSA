#include <iostream>
using namespace std;
void countOccurrences(int arr[], int n)
{
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
        else
        {
            cout << arr[i - 1] << " occurs " << count << " times" << endl;
            count = 1;
        }
    }
    cout << arr[n - 1] << " occurs " << count << " times" << endl;
}
int main()
{
    int arr[15] = {1, 1, 2, 2, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10}, n = 15;
    countOccurrences(arr, n);
    return 0;
}
