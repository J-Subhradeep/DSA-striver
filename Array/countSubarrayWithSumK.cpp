#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int preSum = 0;
    int count = 0;
    int k = 3;
    unordered_map<int, int> mp;
    mp[0] = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        preSum += arr[i];
        if (mp.find(preSum - k) != mp.end())
        {
            count+=mp[preSum - k];
            mp[preSum]++;
        }
        else
        {
            mp[preSum]++;
        }
    }
    cout << count;
    return 0;
}