#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (int(a) >= 48 && int(a) < 58)
        cout << "Character is a number" << endl;
    else if (int(a) >= 65 && int(a) < 91)
        cout << "Character is Upper case" << endl;
    else if (int(a) >= 97 && int(a) < 123)
        cout << "Character is lower case" << endl;
    else
        cout << "Character is a symbol" << endl;

    return 0;
}