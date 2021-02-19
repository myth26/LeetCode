/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'M') ans += 1000;
            else if(s[i] == 'D') ans += 500;
            else if(s[i] =='C'){
                if(i+1 < s.size()){
                    i++;
                    if(s[i] == 'D') ans += 400;
                    else if(s[i] == 'M') ans += 900;
                    else{
                        ans += 100;
                        i--;
                    }    
                }
                else ans += 100;
            }
            else if(s[i] == 'L') ans += 50;
            else if(s[i] == 'X'){
                if(i+1 < s.size()){
                    i++;
                    if(s[i] == 'L') ans += 40;
                    else if(s[i] == 'C') ans += 90;    
                    else{
                        ans += 10;
                        i--;
                    }
                }
                else ans += 10;
            }
            else if(s[i] == 'V') ans += 5;
            else if(s[i] == 'I'){
                if(i+1 < s.size()){
                    i++;
                    if(s[i] == 'V') ans += 4;
                    else if(s[i] == 'X') ans += 9;    
                    else{
                        ans += 1;
                        i--;
                    }
                }
                else ans += 1;
            }
        }
        return ans;
    }
};
// @lc code=end

