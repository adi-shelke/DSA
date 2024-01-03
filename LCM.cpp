#include <iostream>
using namespace std;

int lcm(int a, int b)
{
    int maxnum = max(a, b);
    while (true)
    {
        if (maxnum % a == 0 && maxnum % b == 0)
            return maxnum;
        maxnum++;
    }
}
int main()
{
    int a, b;
    cout << "Enter first and second number:- ";
    cin >> a >> b;
    cout << "The LCM of(" << a << "," << b << ") is " << lcm(a, b);

    return 0;
}