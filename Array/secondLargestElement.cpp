#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12,444,54,565,8,34};
    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < sizeof(arr)/sizeof(int); i++)
    {
        if(arr[i]>largest) {
            secondLargest  = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }
    cout<<largest<<endl;
    cout<<secondLargest<<endl;
    return 0;
}