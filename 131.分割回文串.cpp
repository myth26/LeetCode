/*
 * @lc app=leetcode.cn id=131 lang=cpp
 *
 * [131] 分割回文串
 */

// @lc code=start
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<vector<string>> partition(string s) {
        int n = s.size();
        vector<vector<string>> ans;
         for(int j = 1; j < n; j++){
            vector<string> tmp;
            int i = 0;
            while(i < n){
                if(isPalindrome(s,i,i+j)){
                    tmp.push_back(s.substr(i,j));
                    i += j;
                }
            }
        }
    }

    bool isPalindrome(const string& s, int i, int j){
        while(i < j){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
// @lc code=end

