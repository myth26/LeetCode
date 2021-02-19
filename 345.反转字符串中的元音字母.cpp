/*
 * @lc app=leetcode.cn id=345 lang=cpp
 *
 * [345] 反转字符串中的元音字母
 */

// @lc code=start
#include <string>
#include <set>
using namespace std;
class Solution {
public:
    string reverseVowels(string& s) {
        set<char> st{'a','e','i','o','u','A','E','I','O','U'};
        int i = 0, j = s.size() - 1;
        while(i < j){
            while(st.find(s[i]) == st.end()){
                i++;
                if(i >= j) break;
            }
            while(st.find(s[j]) == st.end()){
                j--;
                if(i >= j) break;
            }
            if(i >= j) break;
            char c = s[i];
            s[i] = s[j];
            s[j] = c;
            i++;
            j--;
        } 
        return s;
    }
};
// @lc code=end

