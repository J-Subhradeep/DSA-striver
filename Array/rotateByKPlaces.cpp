#include <bits/stdc++.h>
using namespace std;
int main()
{

    // brute
    // vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    // int d = 17;
    // d = d % arr.size();
    // vector<int>
    //     temp;
    // for (int i = 0; i < d; i++)
    // {
    //     temp.push_back(arr[i]);
    // }
    // for (int i = d; i < arr.size(); i++)
    // {
    //     arr[i - d] = arr[i];
    // }
    // for (int i = arr.size() - 1; i >= arr.size() - d; i--)
    // {
    //     arr[i] = temp.back();
    //     temp.pop_back();
    // }
    // for (auto &&i : arr)
    // {
    //     cout << i << " ";
    // }

    // optimal

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int d = 3;
    d = d % (sizeof(arr) / sizeof(int));
    reverse(arr, arr + d);
    reverse(arr + d, arr + (sizeof(arr) / sizeof(int)));
    reverse(arr, arr + (sizeof(arr) / sizeof(int)));
    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}