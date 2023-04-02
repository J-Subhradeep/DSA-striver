#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{-1, -2, 4, -1, -2, 1, 5, -3};
    int maxSum = INT32_MIN;
    int sum = 0;
    int j = 0;
    int k = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (sum == 0)
            j = i;
        sum += arr[i];

        if (sum > maxSum)
        {

            maxSum = sum;
            k = i;
        }
        if (sum < 0)
            sum = 0;
    }
    cout << maxSum << endl
         << j << " " << k;

    return 0;
}