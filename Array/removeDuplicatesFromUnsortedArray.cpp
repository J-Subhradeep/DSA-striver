#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{1,2,31,2,4,45,2};
    map<int,int> m;
    for (auto &&i : arr)
    {
        if(m.find(i)==m.end()){
            cout<<i<<" ";
            m[i]++;
        }
    }
    
    return 0;
}