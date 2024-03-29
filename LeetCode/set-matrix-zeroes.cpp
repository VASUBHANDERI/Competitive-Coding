#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {

        vector<int> raw;
        vector<int> col;
        vector<int> zraw(matrix[0].size(), 0);
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    raw.push_back(i);
                    col.push_back(j);
                }
            }
        }

        for (int i = 0; i < raw.size(); i++)
        {
            matrix[raw[i]] = zraw;
        }
        for (int i = 0; i < col.size(); i++)
        {
            for (int j = 0; j < matrix.size(); j++)
            {
                matrix[j][col[i]] = 0;
            }
        }

        for (auto itr : matrix)
        {
            for (auto it : itr)
            {
                cout << it;
            }
            cout << endl;
        }
    }
};