#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1,2,1,3};
    // better
    // map<int, int> m;
    // int k = 1;
    // int maxLength = 0;
    // long long sum = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {

    //     sum += arr[i];
    //     if (sum == k)
    //     {
    //         maxLength = max(maxLength, i + 1);
    //     }

    //     if (m.find(sum - k) != m.end())
    //     {
    //         maxLength = max(i - m[sum - k], maxLength);
    //     }
    //     if (! (m.find(sum) != m.end()))
    //         m[sum] = i;
    // }
    // for (auto &&i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    // cout << maxLength << endl;

    // optimal
    int i = 0;
    int j = 0;
    int sum = 0;
    int k = 2;
    int maxLength = 0;
    while (i < arr.size())
    {
        sum += arr[i];
        if (sum == k)
        {
            cout<<i<<","<<j<<endl;
            maxLength = max(maxLength, i - j + 1);
        }
        while (i>=j && sum > k)
        {
            sum -= arr[j];
            j++;
        }
        i++;
        cout<<sum;
    }
    cout << maxLength;
    return 0;
}