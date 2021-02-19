/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int i, j, k, maxLen = 0, maxi = 0, maxj = 0;
        bool isFound = true;
        for(i = 0; i < s.size(); i++){
            j = s.size() - 1;
            k = -1;
            int m = i;
            while(j > m){
                if(s[m] == s[j]){
                    isFound = true;
                    if(k == -1)
                        k = j;
                    m++;
                    j--;
                }
                else{
                    isFound = false;
                    k = -1;
                    j--;
                }
            }
            if(isFound){
                if(k - i + 1 > maxLen){
                    maxi = i;
                    maxj = k;
                }
                maxLen = max(maxLen, k - i + 1);
            }
        }
        string ans;
        for(int i =maxi; i <= maxj; i++){
            ans += s[i];
        }
        return ans;
    }
};
// @lc code=end

