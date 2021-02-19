/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return 0;
        if(needle.size() > haystack.size()) return -1;
        int n = needle.size();
        int i = 0, begin = -1;
        while(i < haystack.size()){
            if(haystack[i] != needle[0]) i++;
            else{
                begin = i;
                for(int j = 1; j < n; j++){
                    if(i+j >= haystack.size() || haystack[i+j] != needle[j]) begin = -1;
                }
                if(begin != -1) return begin;
                i++;
            }
        }
        return begin;
    }
};
// @lc code=end

