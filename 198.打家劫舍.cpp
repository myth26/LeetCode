/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int price1 = 0, price2 = 0;
        for(int i = 0; i < nums.size(); i++){
            int curr = max(price2+nums[i], price1);
            price2 = price1;
            price1 = curr;
        }
        return price1;
    }
};
// @lc code=end

