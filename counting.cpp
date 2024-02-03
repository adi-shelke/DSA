#include <iostream>
using namespace std;
int count(int number)
{
    if (number == 1)
    {
        cout << number << " ";
        return 0;
    }
    cout << number << " ";
    count(number - 1);
    return 1;
}
int main()
{

    int n;
    cin >> n;
    cout << "The reverse count is ";
    count(n);
    return 0;
}