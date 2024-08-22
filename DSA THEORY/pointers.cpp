#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 10;
    int *ptr = &a;
    cout << "ADDRESS: " << ptr << endl;
    cout << "VALUE: " << *ptr << endl;

    ptr = &b; // Both Address and Value Changed
    cout << "ADDRESS: " << ptr << endl;
    cout << "VALUE: " << *ptr << endl;

    *ptr = b; // Value Changed But Adress Same
    cout << "ADDRESS: " << ptr << endl;
    cout << "VALUE: " << *ptr << endl;

    return 0;
}