#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{2,12, 4, 5, 6, 8, 1};
    int target = 14;
    vector<int> ans;
    // better
    map<int, int> m;
    for (int i = 0; i < arr.size(); i++)
    {
        if (m.find(target - arr[i]) != m.end())
        {
            ans.push_back(i);
            ans.push_back(m[target - arr[i]]);
            break;
        }
        else
        {
            m[arr[i]] = i;
        }
    }
    for (auto &&i : ans)
    {
        cout << i << " ";
    }
    for (auto &&i : m)
    {
        cout<<i.first<<"-"<<i.second<<endl;
    }
    

    return 0;
}