/*
 * @lc app=leetcode.cn id=413 lang=cpp
 *
 * [413] 等差数列划分
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int n = A.size();
        if(n < 3) return 0;
        vector<int> dp(n, 0);
        for(int i = 2; i < n; i++){
            if(A[i-1] - A[i-2] == A[i] - A[i-1]){
                dp[i] = dp[i-1] + 1;
            }
        }
        int ans = 0;
        for(int k : dp){
            ans += k;
        }
        return ans;
    }
};
// @lc code=end

