/*
 * @lc app=leetcode.cn id=48 lang=cpp
 *
 * [48] 旋转图像
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> v(n, vector<int>(n,0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                v[i][j] = matrix[i][j];
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                matrix[j][n-1-i] = v[i][j];
        }
    }
};
// @lc code=end

