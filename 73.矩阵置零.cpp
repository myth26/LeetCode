/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */

// @lc code=start
#include <vector>
#include <map>
using namespace std;
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        vector<int> m(matrix.size(), 0);
        vector<int> n(matrix[0].size(), 0);
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    m[i] = 1;
                    n[j] = 1;
                }
            }
        }

        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (n[j] == 1)
            {
                for (int i = 0; i < matrix.size(); i++)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            if (m[i] == 1)
            {
                for (int j = 0; j < matrix[0].size(); j++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
// @lc code=end
