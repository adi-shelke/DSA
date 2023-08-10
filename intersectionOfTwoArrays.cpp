#include <iostream>
#include <vector>
using namespace std;
vector<int> interSection(vector<int> vect, vector<int> vect2)
{
    vector<int> ans;
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect2.size(); j++)
        {
            if ((vect[i] == vect2[j]) && vect2[j] != INT32_MIN)
            {
                ans.push_back(vect[i]);
                vect2[j] = INT32_MIN;
                break;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> vect1{1, 2, 4, 4, 5};
    vector<int> vect2{3, 2, 4};
    vector<int> ans = interSection(vect1, vect2);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}