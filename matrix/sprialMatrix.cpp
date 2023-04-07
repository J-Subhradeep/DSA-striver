#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix{
        {1, 2, 3, 4, 5},
        {5, 6, 7, 8, 1},
        {9, 6, 9, 1, 2},
        {2, 3, 4, 5, 5},
        {2, 3, 2, 5, 5}};
    vector<int> result;
    int top = 0, bottom = matrix.size(), left = 0, right = matrix[0].size();
    while (top <= bottom && left <= right)
    {

        for (int i = left; i < right; i++)
        {
            result.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i < bottom; i++)
        {
            result.push_back(matrix[i][right - 1]);
        }
        right--;
        if (top <= bottom)
            for (int i = right - 1; i >= left; i--)
            {
                result.push_back(matrix[bottom - 1][i]);
            }
        bottom--;
        if(left <= right)
        for (int i = bottom - 1; i >= top; i--)
        {
            result.push_back(matrix[i][left]);
        }
        left++;
        for (auto &&i : result)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}