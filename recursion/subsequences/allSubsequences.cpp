#include <bits/stdc++.h>
using namespace std;
void allSubsequences(vector<int> arr, vector<int> &ans, int i)
{
    if (i >= arr.size())
    {
        for (auto &&j : ans)
        {
            cout << j << " ";
        }
        cout << endl;
        return;
    }
    ans.push_back(arr[i]);
    allSubsequences(arr, ans, i+1);
    ans.pop_back();
    allSubsequences(arr, ans, i+1);
};
int main()
{
    vector<int> arr{3,1,2};
    vector<int> ans;
    allSubsequences(arr, ans, 0);
    return 0;
}