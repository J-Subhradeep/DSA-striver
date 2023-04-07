#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix{
        {1, 3, 3, 5},
        {1, 2, 3, 4},
        {2, 3, 5, 6},
        {3, 4, 5, 6},};
    // result :
//  3 2 1 1 
//  4 3 2 3
//  5 5 3 3
//  6 6 4 5

    // transpose matrix
    // {1,1,2,3}
    // {3,2,3,4}
    // {3,3,5,5}
    // {5,4,6,6}
    // matrix[0][1] <-> matrix[1][0] | matrix[1][2]<->matrix[2][1]
    // matrix[0][2] <-> matrix[2][0] | matrix[1][3]<->matrix[3][1]
    // matrix[0][3] <-> matrix[3][0] | matrix[2][3]<->matrix[3][2]
    
   
    for (int i = 0; i < matrix.size()-1; i++)
    {
        for (int j = i+1; j < matrix[0].size(); j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // 1 1 2 3 
    // 3 2 3 4 
    // 3 3 5 5 
    // 5 4 6 6 
    for (auto &&i : matrix)
    {
        reverse(i.begin(), i.end());
    }
    for (auto &&i : matrix)
    {
        for (auto &&j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}