#include <iostream>
#include <vector>
using namespace std;
int isPossible(vector<int> &boards, int k, int mid)
{
    int painterCounter = 1;
    int boardSum = 0;

    for (int i = 0; i < boards.size(); i++)
    {
        if (boardSum + boards[i] <= mid)
            boardSum += boards[i];
        else
        {
            painterCounter++;
            if (painterCounter > k || boards[i] > mid)
                return false;
            boardSum = boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < boards.size(); i++)
        sum += boards[i];
    int end = sum;
    int ans = -1;
    int mid = start + (end - sum) / 2;

    while (start <= end)
    {
        if (isPossible(boards, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{

    vector<int> vect{10, 20, 30, 40};
    cout << findLargestMinDistance(vect, 2);
    return 0;
}