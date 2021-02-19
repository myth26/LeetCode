/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while(i < j){
            if(numbers[i] + numbers[j] <  target) i++;
            else if(numbers[i] + numbers[j] > target) j--;
            else break;
        }
        vector<int> ans{i+1,j+1};
        return ans;

    }
};
// @lc code=end

