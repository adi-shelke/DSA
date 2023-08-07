#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int start = 0;
    int end = 4;
    for (int i = 0; i < (5 / 2); i++)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}