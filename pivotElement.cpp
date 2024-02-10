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
        while (true)
        {
            if (arr[mid] < arr[mid - 1])
            {
                return mid;
            }
            else if (arr[mid] > arr[mid + 1])
                return mid + 1;
            else
                end = mid - 1;
        }
    }
};
int main()
{

    Solution s;
    // vector<int> vect{8, 10, 17, 1, 3};
    vector<int> vect{4, 5, 6, 7, 0, 1, 2};
    cout << s.pivot(vect);
    return 0;
}