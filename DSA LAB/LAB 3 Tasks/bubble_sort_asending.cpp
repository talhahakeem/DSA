#include <iostream>
using namespace std;
void bubblesort(int arr[], int n)
{
    for (int i = n; i > 0; i--)
    {
        bool isswapped = false;
        for (int j = 0; j < i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isswapped = true;
            }
        }
        if (!isswapped)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int array[6] = {5, 9, 2, 7, 3, 6};
    bubblesort(array, 6);
    return 0;
}