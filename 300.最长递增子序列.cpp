/*
 * @lc app=leetcode.cn id=300 lang=cpp
 *
 * [300] 最长递增子序列
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int maxLen = 1;
        for(int i = 0; i < nums.size(); i++){
            int currLen = 1, currMax = -1;
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[j] > nums[i]){
                    if(j == i + 1) currMax = nums[i];
                    if(nums[j] > currMax){
                        currLen++;
                        currMax = nums[j];
                    } 
                }
            }
            if(currLen > maxLen) maxLen = currLen;
        }
        return maxLen;
    }
};
// @lc code=end

