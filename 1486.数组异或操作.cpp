/*
 * @lc app=leetcode.cn id=1486 lang=cpp
 *
 * [1486] 数组异或操作
 */

// @lc code=start
class Solution {
public:
    int xorOperation(int n, int start) {
        int res = start;
        for(int i = 1; i < n; i++){
            res ^= (start + 2 * i);
        }
        return res;
    }
};
// @lc code=end

