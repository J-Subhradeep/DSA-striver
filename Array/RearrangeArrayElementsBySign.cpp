#include <bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr{2,3,-2,4,-5,-6};
int i = 0;
int j = 1;
vector<int> ans(arr.size(),0);
for (int x = 0; x < arr.size(); x++)
{
    if(arr[x]>=0){
        ans[x] = arr[i];
        i+=2;
    }
    else{
        ans[x] = arr[j];
        j+=2;
    }
}

for (auto &&i : ans)
{
    cout<<i<<" ";
}

    return 0;
}