/*
 * @lc app=leetcode.cn id=1689 lang=cpp
 *
 * [1689] 十-二进制数的最少数目
 */

// @lc code=start
#include <string>
using namespace std;
class Solution {
public:
    int minPartitions(string n) {
        int size = n.size();
        int max = 0;
        for(int i = 0; i < size; i++){
            if(n[i] - '0' > max) max = n[i] - '0';
        }
        return max;
    }
};
// @lc code=end

