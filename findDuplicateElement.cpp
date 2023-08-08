#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int i = 0;
    while (i < arr.size())
    {
        if (arr[i] == arr[i + 1])
            return arr[i];
        i++;
    }
    return 0;
}
int main()
{

    // 4 2 2 3 1
    // 1 2 2 3 4
    vector<int> vect{6, 3, 1, 5, 4, 3, 2};
    cout << findDuplicate(vect);

    return 0;
}