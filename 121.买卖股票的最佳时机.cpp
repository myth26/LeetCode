/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0) return 0;
        vector<int> dp(prices.size());
        dp[0] = 0;
        int buy = prices[0];
        for(int i = 1; i < prices.size(); i++){
            dp[i] = max(prices[i] - buy, dp[i-1]);
            if(prices[i] < buy) buy = prices[i];
        }
        // int ans = 0;
        // int buy = prices[0];
        // for(int i = 0; i < prices.size(); i++){
        //     if(prices[i] < buy) buy = prices[i];
        //     else if(prices[i] > buy){
        //         if(prices[i] - buy > ans)
        //             ans = prices[i] - buy;
        //     } 
        // }
        return dp[prices.size()-1];
    }
    int max(int a, int b){
        return a > b ? a : b;
    }
};
// @lc code=end

