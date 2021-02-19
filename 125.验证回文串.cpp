/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int i, j;
        i = 0;
        j = s.size() - 1;
        while(i < j){
            while(i <  s.size() - 1 && !isalnum(s[i])) i++;
            while(i <  s.size() - 1 && !isalnum(s[j])) j--;
            if(i < j && tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};
// @lc code=end

