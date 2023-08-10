#include <iostream>
#include <vector>
using namespace std;
vector<int> intersection(vector<int> vect1, vector<int> vect2)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < vect1.size() && j < vect2.size())
    {
        if (vect1[i] == vect2[j])
        {
            ans.push_back(vect1[i]);
            i++;
            j++;
        }
        else if (vect1[i] < vect2[j])
            i++;
        else
            j++;
    }
    return ans;
}
int main()
{
    vector<int> vect1{1, 2, 3, 3, 4, 5};
    vector<int> vect2{2, 4, 4, 5};
    vector<int> ans;
    ans = intersection(vect1, vect2);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}