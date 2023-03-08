#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr1{1, 2, 3, 4, 5, 6, 7};
    vector<int> arr2{2, 2, 4, 5, 5, 8};
    vector<int> result;
    int i = 0;
    int j = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        /* code */
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else if (arr1[i] == arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    for (auto &&i : result)
    {
        cout << i << " ";
    }
    return 0;
}