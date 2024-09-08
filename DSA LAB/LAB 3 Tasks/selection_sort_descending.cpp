#include <iostream>
using namespace std;
void selectionsort(int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int small_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[small_index] < array[j])
            {
                small_index = j;
            }
        }
        if (small_index != i)
        {
            int temp = array[i];
            array[i] = array[small_index];
            array[small_index] = temp;
        }
    }
}

int main()
{
    int array[] = {12, 45, 23, 51, 19, 8};
    cout << "Original array: ";
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    selectionsort(array, 6);
    cout << "Sorted array in desecending order: ";
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
