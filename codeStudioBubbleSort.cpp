#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
        for (int j = 0; j < n - i; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
    return arr;
}

int main()
{
    vector<int> vect{6, 2, 8, 4, 10};
    vect = bubbleSort(vect, 5);
    for (auto i : vect)
        cout << i << " ";
    return 0;
}
