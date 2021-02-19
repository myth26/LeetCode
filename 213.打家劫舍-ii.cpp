/*
 * @lc app=leetcode.cn id=213 lang=cpp
 *
 * [213] 打家劫舍 II
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        if(size == 0) return 0;
        if(size == 1) return nums[0];
        return max(myRob(nums,0,size-1), myRob(nums,1,size));
    }
    int myRob(vector<int>& nums, int i, int j){
        int price1 = 0, price2 = 0;
        while(i < j){
            int curr = max(price2+nums[i], price1);
            price2 = price1;
            price1 = curr;
            i++;
        }
        return price1;
    }
};
// @lc code=end

