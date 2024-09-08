#include <iostream>
using namespace std;
int fact(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    return x * fact(x - 1);
}
int main()
{
    int n, result;
    cout << "Enter the Number for which you want to find the factorial: ";
    cin >> n;
    result = fact(n);
    cout << "Factorial of Given Number is :" << result;
    return 0;
}