#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 0, 3, 4, 5, 0, 5, 6, 7, 0, 10};
    int j = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (!arr[i])
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < arr.size(); i++)
    {
        /* code */
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
        else
        {
            // i++;
        }
    }
    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}