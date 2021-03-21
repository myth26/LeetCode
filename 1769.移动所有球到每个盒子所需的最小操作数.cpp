/*
 * @lc app=leetcode.cn id=1769 lang=cpp
 *
 * [1769] 移动所有球到每个盒子所需的最小操作数
 */

// @lc code=start
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size());
        int left = 0, right = 0, total = 0;
        if(boxes[0] == '1') left++;
        for(int i = 1; i < boxes.size(); i++){
            if(boxes[i] == '1') {
                total += i;
                right++;
            }
        }
        ans[0] = total;
        for(int i = 1; i < boxes.size(); i++){
            total += left - right;
            if(boxes[i] == '1'){
                left++;
                right--;
            }
            ans[i] = total;
        }
        return ans;
    }
};
// @lc code=end

