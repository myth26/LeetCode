/*
 * @lc app=leetcode.cn id=504 lang=cpp
 *
 * [504] 七进制数
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    string convertToBase7(int num) {
        string ans = "", tmp = "";
        if(num < 0){
            num = -num;
            ans += '-';
        }
        while(num >= 7){
            tmp += (num % 7) + '0';
            num /= 7;
        }
        tmp += num + '0';
        for(int i = tmp.size() - 1; i >= 0; i--){
            ans += tmp[i];
        }
        return ans;
    }
};
// @lc code=end

