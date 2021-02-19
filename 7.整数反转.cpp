/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start\
//#include <string>
#include <string>
#include <climits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        string ans = to_string(x);
        int i, j;
        if(x < 0) i = 1;
        else i = 0;
        j = ans.size() - 1;
        while(i < j){
            char c = ans[i];
            ans[i] = ans[j];
            ans[j] = c;
            i++;
            j--;
        }
        if(atol(ans.c_str()) > INT32_MAX || atol(ans.c_str()) < INT32_MIN)
            return 0;
        return atoi(ans.c_str());
    }
};
// @lc code=end

