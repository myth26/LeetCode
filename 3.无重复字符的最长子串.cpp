/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
#include <string>
#include <vector>
#include <list>
class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::list<char> list;
        int maxLen = 0;
        for(int i = 0; i < s.size(); i++){
            if(std::find(list.begin(),list.end(),s[i]) == list.end())
                list.push_back(s[i]);
            else
            {    
                if(list.size() > maxLen)
                    maxLen = list.size();
                list.clear();
                i--;
            }
                
        }
        return list.size() > maxLen ? list.size() : maxLen;
    }
};
// @lc code=end

