/*
 * @lc app=leetcode.cn id=75 lang=cpp
 *
 * [75] 颜色分类
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = 0, k = nums.size() - 1;
        while(i <= k){
            if(nums[i] == 0){
                swap(nums,i++,j++);
            }
            else if(nums[i] == 2){
                swap(nums,i,k--);
            }
            else i++;
        }
    }
    void swap(vector<int>& nums, int i, int j){
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }
};
// @lc code=end

