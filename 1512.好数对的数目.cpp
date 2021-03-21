/*
 * @lc app=leetcode.cn id=1512 lang=cpp
 *
 * [1512] 好数对的数目
 */

// @lc code=start
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        vector<int> nmx(101,0);
        for(int i = 0; i < nums.size(); i++){
            nmx[nums[i]]++;
        }
        for(int i = 0; i < 101; i++){
            if(nmx[i] != 0){
                ans += nmx[i] * (nmx[i] - 1) / 2;
            }
        }
        return ans;
    }
};
// @lc code=end

