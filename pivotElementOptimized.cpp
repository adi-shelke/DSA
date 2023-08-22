#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int pivot(vector<int> arr)
    {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end - start) / 2;
        while (start < end)
        {
            if (arr[mid] >= arr[0])
                start = mid + 1;
            else
                end = mid - 1;

            mid = start + (end - start) / 2;
        }
        return start;
    }
};
int main()
{

    Solution s;
    vector<int> vect{8, 10, 17, 1, 3};
    cout << s.pivot(vect);
    return 0;
}