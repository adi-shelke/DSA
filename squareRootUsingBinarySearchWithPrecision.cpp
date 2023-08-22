#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    long long int mySqrt(int x)
    {
        int start = 0;
        int end = x / 2;
        long long int mid = start + (end - start) / 2;
        long long int ans;

        while (start <= end)
        {
            if (mid * mid == x)
                return mid;
            else if (mid * mid > x)
                end = mid - 1;
            else
            {
                ans = mid;
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        return ans;
    }

    double precise(int n, int precision, int tempAns)
    {
        double factor = 1;
        double ans = tempAns;

        for (int i = 0; i < precision; i++)
        {
            factor = factor / 10;
            for (double j = ans; j * j < n; j = j + factor)
            {
                ans = j;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    int num = 35;
    int intPart = s.mySqrt(35);
    cout << s.precise(num, 3, intPart);
    return 0;
}