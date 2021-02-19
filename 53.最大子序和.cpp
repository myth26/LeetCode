/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int currSum = nums[0], maxSum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(currSum < 0) currSum = nums[i];
            else{
                currSum += nums[i];  
            }
            if(currSum > maxSum)
                    maxSum = currSum;
        }
        return maxSum;
    }
};
// @lc code=end

