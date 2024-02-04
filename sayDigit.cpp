#include <iostream>
#include <string>
using namespace std;

void say(int n)
{
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (to_string(n).length() == 1)
    {
        cout << arr[n] << " ";
        return;
    }
    else
    {
        int last = n % 10;
        n = n / 10;
        say(n);
        cout << arr[last] << " ";
    }
}

int main()
{

    int number;
    cout << "Enter the number to say: ";
    cin >> number;
    say(number);
    return 0;
}