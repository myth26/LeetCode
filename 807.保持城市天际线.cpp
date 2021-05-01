/*
 * @lc app=leetcode.cn id=807 lang=cpp
 *
 * [807] 保持城市天际线
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> rowMaxs(grid.size());
        vector<int> colMaxs(grid[0].size());
        for(int i = 0; i < grid.size(); i++){
            int rowMax = grid[i][0];
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] > rowMax) rowMax = grid[i][j];
            }
            rowMaxs[i] = rowMax;
        }
        for(int j = 0; j < grid[0].size(); j++){
            int colMax = grid[0][j];
            for(int i = 0; i < grid.size(); i++){
                if(grid[i][j] > colMax) colMax = grid[i][j];
            }
            colMaxs[j] = colMax;
        }
        int res = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                res += min(rowMaxs[i],colMaxs[j]) - grid[i][j];
            }
        }
        return res;
    }
};
// @lc code=end

