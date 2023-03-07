#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1, 1, 2, 2, 2, 4, 4};
    int i = 0;
    for (int j = 1; j < v.size(); j++)
    {
        /* code */
        if (v[j] != v[i])
        {
            v[i + 1] = v[j];
            i = i+1;
        }
    }
    for (int k = 0; k < i+1; k++)
    {
        cout<<v[k]<<" ";
    }
    

    return 0;
}