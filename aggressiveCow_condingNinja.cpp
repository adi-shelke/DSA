#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cowCount = 1;
    int firstPos = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - firstPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
                return true;
            firstPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int end = -1;
    for (int i = 0; i < stalls.size(); i++)
        end = max(end, stalls[i]);

    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){

    vector<int> vect{1, 2, 4, 8, 9};
    cout << aggressiveCows(vect, 3);
    return 0;
}