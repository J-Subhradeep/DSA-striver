#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 43, 34, 5, 5, 1, 2};
    map<int, int> m;
    for (auto &&i : arr)
    {
        {
            m[i]++;
        }
    }
    for (auto &&i : m)
    {
        if (i.second > 1)
        {
            cout << i.first << " ";
        }
    }

    return 0;
}