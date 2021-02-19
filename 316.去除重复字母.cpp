/*
 * @lc app=leetcode.cn id=316 lang=cpp
 *
 * [316] 去除重复字母
 */

// @lc code=start
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans;
        int a[26] = {0};
        for(int i = 0; i < s.size(); i++){
            a[s[i]-'a'] = i;
        }
        sort(a,a+26);
        for(int i = 0; i < 26; i++){
            if(a[i] != 0)
                ans += s[a[i]];
        }
        return ans;
    }
};
// @lc code=end

