#include <iostream>
using namespace std;
void removeduplicate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                while (j < n)
                {
                    arr[j] = arr[j + 1];
                    j++;
                }
                n--;
            }
            else
            {
                continue;
            }
        }
    }
    cout << "Modified Array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeduplicate(arr, n);
    return 0;
}