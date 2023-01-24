/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> triangle;

        vector<int> firstraw(1, 1);
        vector<int> secondraw(2, 1);

        triangle.push_back(firstraw);

        if (numRows > 1)
        {

            triangle.push_back(secondraw);

            int n = 2;

            while (n < numRows)
            {
                vector<int> raw(n + 1);
                raw[0] = 1;
                raw[n] = 1;
                for (int i = 1; i < n; i++)
                {
                    raw[i] = triangle[n - 1][i - 1] + triangle[n - 1][i];
                }
                triangle.push_back(raw);
                n++;
            }
        }

        return triangle;
    }
};
// @lc code=end
