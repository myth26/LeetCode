/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        string ans;
        int n = s.size();
        int step = 2 * numRows - 2;
        for(int i = 0; i < numRows; i++){
            for(int j = 0; j + i < n; j+=step){
                ans += s[j+i];
                if(i != 0 && i != numRows - 1 && j + step - i < n)
                    ans += s[j + step - i];
            }
        }
        return ans;
    }
};
// @lc code=end

