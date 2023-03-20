#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{2, 2, 3, 4, 2, 2, 1};
    // better
    map<int, int> m;
    for (int i = 0; i < arr.size(); i++)
    {
        m[arr[i]]++;
    }
    for (auto &&i : m)
    {
        if (i.second > arr.size() / 2)
        {
            cout << i.first<<endl;
            break;
        }
    }
    // optimal
    int cnt = 0;
    int elm;
    for (int i = 0; i < arr.size(); i++)
    {
        if(cnt==0  ){
            cnt = 1;
            elm = arr[i];
        }
        else if(arr[i]==elm){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        if(arr[i]==elm) cnt2++;
    }
    if(cnt2>arr.size()/2) cout<<elm;
    
    

    return 0;
}