#include <iostream>
using namespace std;

int fib(int number)
{
    if (number == 0 || number == 1)
        return number;
    return fib(number - 1) + fib(number - 2);
}

int main()
{

    int number;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 0; i < number; i++)
        cout << fib(i) << " ";
    return 0;
}