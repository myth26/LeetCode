/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i = 0; i * 2 < s.size(); i++){
            int tmp = s[i];
            s[i] = s[s.size() - i - 1];
            s[s.size() - i - 1] = tmp;
        }
    }
};
// @lc code=end

