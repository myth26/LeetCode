/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int n : nums){
            if(n != 0) nums[i++] = n;
        }
        for(int j = i; j < nums.size(); j++){
            nums[j] = 0;
        }
    }
};
// @lc code=end

