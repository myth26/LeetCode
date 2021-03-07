/*
 * @lc app=leetcode.cn id=300 lang=cpp
 *
 * [300] 最长递增子序列
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n);
        for(int i = 0; i < n; i++){
            int maxLen = 1;
            for(int j = 0; j < i; j++){
                if(nums[i] > nums[j]){
                    maxLen = max(maxLen, dp[j] + 1);
                }
            }
            dp[i] = maxLen;
        }
        int ret = 0;
        for(int i = 0; i < n; i++){
            ret = max(ret,dp[i]);
        }
        return ret;
    }
};
// @lc code=end

