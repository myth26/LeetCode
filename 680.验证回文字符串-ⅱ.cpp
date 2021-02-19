/*
 * @lc app=leetcode.cn id=680 lang=cpp
 *
 * [680] 验证回文字符串 Ⅱ
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    bool validPalindrome(string s) {
        int count = 0;
        int i = 0, j = s.size() - 1;
        while(i < j){
            if(s[i] != s[j]){
                return isPalindrom(s,i+1,j) || isPalindrom(s,i,j-1);
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrom(string& s, int i, int j){
        while(i < j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
// @lc code=end

