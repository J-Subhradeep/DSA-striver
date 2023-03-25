#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr{-2, -3, -1, 4, -1, -2, 1, 5, -3};
    int maxSum = INT32_MIN;
    int sum = 0;
    int k = 0;
    int j = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];

        if (sum > maxSum)
        {
            maxSum = sum;
            j = i;
        }
        if (sum < 0)
        {
            sum = 0;
            k = i+1;
        }
    }
    cout << maxSum << endl;
    for (int c = k; c <= j; c++)
    {
        cout << arr[c] << "  ";
    }

    return 0;
}