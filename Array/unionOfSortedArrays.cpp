#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr1{1, 1, 2, 2, 3, 5, 6};
    vector<int> arr2{2, 3, 4, 5, 7,8,9};
    vector<int> result;
    int i = 0;
    int j = 0;
    int lastElement = -1;
    while (i < arr1.size() && j < arr2.size())
    {

        if (arr1[i] <= arr2[j])
        {
            if (arr1[i] != lastElement)
            {
                result.push_back(arr1[i]);
                lastElement = arr1[i];
            }
            i++;
        }
        else
        {
            if (arr2[j] != lastElement)
            {
                result.push_back(arr2[j]);
                lastElement = arr2[j];
            }
            j++;
        }
    }

    for (int k = i; k < arr1.size(); k++)
    {
        result.push_back(arr1[k]);
    }
    for (int k = j; k < arr2.size(); k++)
    {
        result.push_back(arr2[k]);
    }
    for (auto &&i : result)
    {
        cout << i << " ";
    }

    return 0;
}