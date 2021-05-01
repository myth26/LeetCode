/*
 * @lc app=leetcode.cn id=1431 lang=cpp
 *
 * [1431] 拥有最多糖果的孩子
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size());
        int maxCandies = -1;
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] > maxCandies) maxCandies = candies[i];
        }
        for(int i = 0; i < candies.size(); i++){
            if(candies[i]  + extraCandies >= maxCandies){
                ans[i] = true;
            }
            else ans[i] = false;
        }
        return ans;
    }
};
// @lc code=end

