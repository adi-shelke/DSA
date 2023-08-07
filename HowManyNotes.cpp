#include <iostream>
using namespace std;
int main()
{

    int amount = 1330;
    int hundred, fifty, twenty, ten;

    hundred = amount / 100;
    amount = amount - (hundred * 100);
    fifty = amount / 50;
    amount = amount - (fifty * 50);
    twenty = amount / 20;
    amount = amount - (twenty * 20);
    ten = amount / 1;
    // amount = amount - (hundred * 100);

    cout << "Hundred: " << hundred << " "
         << "Fifty: " << fifty << " "
         << "Twenty: " << twenty << " "
         << "Ten: " << ten << endl;
    return 0;
}