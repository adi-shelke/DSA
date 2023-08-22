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
};

int main()
{
    Solution s;
    int num = 35;
    cout << s.mySqrt(num);
    return 0;
}