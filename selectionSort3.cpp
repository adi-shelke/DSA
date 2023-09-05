#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            int minIndex = i;
            for (int j = i + 1; j < nums.size(); j++)
                if (nums[j] < nums[minIndex])
                    minIndex = j;
            swap(nums[minIndex], nums[i]);
        }

        return nums;
    }
};

int main()
{
    Solution s;
    vector<int> vect{5, 1, 1, 2, 0, 0};
    vect = s.sortArray(vect);
    for (auto i : vect)
        cout << i << " ";
    return 0;
}