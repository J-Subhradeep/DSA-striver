#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix{
        {1, 3, 3, 5},
        {1, 2, 3, 4},
        {2, 3, 5, 6},
        {3, 4, 5, 6},
        {1, 2, 3, 4}};
    // result :
// 1 3 2 1 1 
// 2 4 3 2 3
// 3 5 5 3 3
// 4 6 6 4 5


    // transpose matrix
    // {1,1,2,3,1}
    // {3,2,3,4,2}
    // {3,3,5,5,3}
    // {5,4,6,6,4}
    // matrix[0][0] -> matrix[0][0] | matrix[0][1]->matrix[1][0]
    // matrix[1][0] -> matrix[0][1] | matrix[1][1]->matrix[1][1]
    // matrix[2][0] -> matrix[0][2] | matrix[2][1]->matrix[1][2]
    // .
    // .
    // matrix[4][0] -> matrix[0][4]
    vector<vector<int>> transposeMatrix(matrix[0].size(), vector<int>(matrix.size(), 0));
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            transposeMatrix[j][i] = matrix[i][j];
        }
    }
    // 1 1 2 3 1
    // 3 2 3 4 2
    // 3 3 5 5 3
    // 5 4 6 6 4
    for (auto &&i : transposeMatrix)
    {
        reverse(i.begin(), i.end());
    }
    for (auto &&i : transposeMatrix)
    {
        for (auto &&j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}