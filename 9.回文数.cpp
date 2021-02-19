/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 ) return false;
        string s = to_string(x);
        int i = 0, j = s.size() - 1;
        while(j > i){
            if(s[i++] != s[j--])
                return false;
        }
        return true;
    }
};
// @lc code=end

