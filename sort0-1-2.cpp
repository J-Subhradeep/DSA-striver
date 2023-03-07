#include <bits/stdc++.h>
using namespace std;
vector<int> sort(vector<int> &arr){
    int low = 0;
    int mid =0;
    int high = arr.size()-1;


    while (high>=mid)
    {
        if( arr[mid] == 0){
            swap(arr[mid++],arr[low++]);
        }
        else if(arr[mid] ==1){
            mid++;
        }
        else if(arr[mid] ==2){
            swap(arr[mid],arr[high--]);
        }
    }
    return arr;
}
int main(int argc, char const *argv[])
{
    vector<int> arr{0,1,1,0,2,1,0,2};
    vector<int> arr2 = sort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr2[i]<<" ";
    }
    
    return 0;
}
