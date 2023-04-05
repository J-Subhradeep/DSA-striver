#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix{
        {1, 1, 1, 1},
        {1, 0, 0, 1},
        {1, 1, 0, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 1}};
    vector<int> row(matrix.size(), 0);
    vector<int> col(matrix[0].size(), 0);
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }



    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (row[i] == 1 || col[j] == 1)
                matrix[i][j] = 0;
        }
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