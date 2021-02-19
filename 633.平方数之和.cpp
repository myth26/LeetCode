/*
 * @lc app=leetcode.cn id=633 lang=cpp
 *
 * [633] 平方数之和
 */

// @lc code=start
#include <algorithm>
using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
        int i = 0;
        int j = sqrt(c);
        while(i <= j){
            if(j < sqrt( c - i * i)) i++;
            else if(j > sqrt( c - i * i)) j--;
            else return true;
        }
        return false;
    }
};
// @lc code=end

