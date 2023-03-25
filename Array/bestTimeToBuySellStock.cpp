#include<bits/stdc++.h>
using namespace std;
int main(){
 vector<int> arr{7,1,2,3,5,6};
 int minimum = arr[0];
 int maxProfit = 0;
 for (int i = 0; i < arr.size(); i++)
 {
    /* code */
    maxProfit = max(maxProfit, arr[i] - minimum);
    minimum = min(arr[i],minimum);
 }
 cout<<maxProfit;
return 0;
}