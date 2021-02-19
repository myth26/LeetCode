/*
 * @lc app=leetcode.cn id=442 lang=cpp
 *
 * [442] 数组中重复的数据
 */

// @lc code=start
#include <vector>
#include<algorithm>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int lastNum;
        for(int i = 0; i < nums.size(); i++){
            if(i != 0 && nums[i] == lastNum) ans.push_back(nums[i]);
            lastNum = nums[i];
        }
        return ans;
    }
};
// @lc code=end

