#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{10, 12, 11, 3, 0, 6};
    vector<int> ans;
    ans.push_back(arr[arr.size() - 1]);
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        /* code */
        if (ans[ans.size() - 1] < arr[i])
            ans.push_back(arr[i]);
    }
    for (auto &&i : ans)
    {
        cout << i << " ";
    }

    return 0;
}