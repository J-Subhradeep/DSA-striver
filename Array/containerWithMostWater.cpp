#include<bits/stdc++.h>
using namespace std;
int main(){
 vector<int> arr{1,8,6,2,5,4,8,3};
 int maxWater = 0;
 int start = 0;
 int end = arr.size() - 1;
while (start<end)
{
    if(arr[start] > arr[end]){

        maxWater = max(maxWater,(end - start)*arr[end]);
        end--;
    }
    else{
        maxWater = max(maxWater,(end-start)*arr[start]);
        start++;
    }
}
cout << maxWater << endl;

return 0;
}