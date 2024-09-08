#include <iostream>
using namespace std;
void Quicksort(int *a, int startindex, int endindex)
{
    if (startindex >= endindex)
    {
        return;
    }
    int i = startindex - 1;
    for (int j = startindex; j < endindex; j++)
    {
        if (a[j] > a[endindex])
        {
            i++;
            int swap = a[i];
            a[i] = a[j];
            a[j] = swap;
        }
    }
    int swap = a[i + 1];
    a[i + 1] = a[endindex];
    a[endindex] = swap;
    Quicksort(a, startindex, i);
    Quicksort(a, i + 2, endindex);
}
int main()
{
    int a[5] = {5, 2, 7, 1, 4};
    int start_index = 0;
    int end_index = 4;
    Quicksort(a, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}