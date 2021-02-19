/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if(nums.size() < 3) return ans;
        sort(nums.begin(),nums.end());
        int zeroPos = 1;
        for(int i = 1; i < nums.size() - 1; i++){
            if(nums[i-1] < 0 && nums[i+1] > 0 || nums[i] == 0){
                zeroPos = i;
                break;
            }
        }
        int n = nums.size();
        //先排序后查找，以0为分界
        for(int i = 0; i <= zeroPos; i++){
            for(int j = i+1; j < n; j++){
                for(int k = j+1; k < n; k++){
                    if(nums[i] + nums[j] + nums[k] == 0)
                    {
                        vector<int> tmp;
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[j]);
                        tmp.push_back(nums[k]);
                        sort(tmp.begin(),tmp.end());
                        if(std::find(ans.begin(),ans.end(),tmp)==ans.end()){
                            ans.push_back(tmp);
                            break;
                        }
                        
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end

