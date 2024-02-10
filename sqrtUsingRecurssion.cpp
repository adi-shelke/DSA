#include <iostream>
using namespace std;

int intPart(int n, int start, int end)
{
    if (start > end)
        return end;
    int mid = start + (end - start) / 2;
    if (mid * mid == n)
        return mid;
    else if (mid * mid > n)
        return intPart(n, start, mid - 1);
    else
        return intPart(n, mid + 1, end);
}
double floatingPart(int target, int integerPart, int precision)
{
    double factor = 1;
    double answer = integerPart;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = answer; j * j <= target; j = j + factor)
            answer = j;
    }

    return answer;
}
int main()
{
    int n = 145;
    int integerPart = intPart(n, 0, n); // "Square root of 81 is 9
    cout << "The square root is " << floatingPart(n, integerPart, 3) << endl;
    return 0;
}