#include <iostream>
using namespace std;
int main()
{

    int a = 0;
    int b = 1;
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    return 0;
}