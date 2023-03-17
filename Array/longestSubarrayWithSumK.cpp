#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{-2, 0, 0, 0, 3};
    // better
    map<int, int> m;
    int k = 1;
    int maxLength = 0;
    long long sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {

        sum += arr[i];
        if (sum == k)
        {
            maxLength = max(maxLength, i + 1);
        }

        if (m.find(sum - k) != m.end())
        {
            maxLength = max(i - m[sum - k], maxLength);
        }
        if (! (m.find(sum) != m.end()))
            m[sum] = i;
    }
    for (auto &&i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << maxLength << endl;
    return 0;
}