/*
 * @lc app=leetcode.cn id=402 lang=cpp
 *
 * [402] 移掉K位数字
 */

// @lc code=start
#include <string>
#include <stack>
using namespace std;
class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans;
        ans += num[0];
        for(int i = 1; i < num.size(); i++){
            if(num[i] > num[i-1] && k){
                ans += num[i];
            }
            else k--;
            if(k == 0) break;
        }

        int count = 0;
        for(int i = 0; i < st.size(); i++){
            ans += st.top();
        }
        
        return ans;
    }
};
// @lc code=end

