#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12,444,54,565,8,34};
    int smallest = arr[0];
    int secondSmallest = -1;

    for (int i = 1; i < sizeof(arr)/sizeof(int); i++)
    {
        if(arr[i]<smallest) {
            secondSmallest  = smallest;
            smallest = arr[i];
        }
        else if(arr[i]>smallest && arr[i]<secondSmallest){
            secondSmallest = arr[i];
        }
    }
    cout<<smallest<<endl;
    cout<<secondSmallest<<endl;
    return 0;
}