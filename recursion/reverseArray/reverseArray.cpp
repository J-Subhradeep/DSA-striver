#include <bits/stdc++.h>
using namespace std;
void reverseArr(vector<int> &arr, int i, int j)
{

    if (i >= j)
        return;
   

        swap(arr[i], arr[j]);
        reverseArr(arr, ++i, --j);

}
int main()
{
    vector<int> arr{1, 2, 3, 4};
    reverseArr(arr, 0, arr.size() - 1);
    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}