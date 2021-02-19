/*
 * @lc app=leetcode.cn id=524 lang=cpp
 *
 * [524] 通过删除字母匹配到字典里最长单词
 */

// @lc code=start
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        sort(d.begin(),d.end());
        int maxCount = 0;
        int result = -1;
        for(int i = 0; i < d.size(); i++){
            int length = d[i].size(), currCount = 0, k = 0;
            for(int j = 0; j < s.size(); j++){
                if(s[j] == d[i][k]){
                    k++;
                    currCount += 1;
                }
            }
            if(currCount == length && currCount > maxCount){
                maxCount = currCount;
                result = i;
            }
        }
        if(result != -1) return d[result];
        return "";
    }
};
// @lc code=end

