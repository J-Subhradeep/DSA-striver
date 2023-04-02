#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{2, 1, 5, 4, 3, 0, 0};
    int index = -1;
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }
    for (int i = arr.size() - 1; i >= index; i--)
    {
        if (arr[i] > arr[index])
        {
            swap(arr[index], arr[i]);
            // cout << "y";
            break;
        }
    }
    sort(arr.begin() + index +1, arr.end());
    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}