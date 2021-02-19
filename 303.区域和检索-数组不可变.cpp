/*
 * @lc app=leetcode.cn id=303 lang=cpp
 *
 * [303] 区域和检索 - 数组不可变
 */

// @lc code=start
#include <vector>
using namespace std;
class NumArray {
    private: vector<int> sums;
public:
    NumArray(vector<int>& nums) {
        sums.resize(nums.size()+1,0);
        for(int i = 1; i <= nums.size(); i++){
            sums[i] = sums[i-1] + nums[i-1];
        }
    }
    
    int sumRange(int i, int j) {
        return sums[j+1] - sums[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
// @lc code=end

