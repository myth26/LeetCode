/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        int ascii[128] = {0};
        for(char c : s){
            ascii[c] += 1;
        }
        for(char c : t){
            ascii[c] -= 1;
        }
        for(int n : ascii){
            if(n != 0) return false;
        }
        return true;
    }
};
// @lc code=end

