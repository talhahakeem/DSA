#include <iostream>
using namespace std;
int fib(int x)
{
    if (x == 0 || x == 1)
    {
        return x;
    }
    else
    {
        return fib(x - 2) + fib(x - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the position: ";
    cin >> n;
    cout << "Fibonacci Number at position " << n << " is : " << fib(n) << endl;
    return 0;
}