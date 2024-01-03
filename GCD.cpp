#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (b > a)
        swap(a, b);
    while (a % b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
        cout << a << " " << b << endl;
    }
    cout << b << endl;

    return 0;
}
