/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int i = m - 1, j = n - 1, k = m + n - 1;
        while(i >= 0 || j >= 0){
            if(i < 0){
                nums1[k] = nums2[j--];
            }
            else if(j < 0){
                nums1[k] = nums1[i--];
            }
            else{
                if(nums1[i] > nums2[j]) nums1[k] = nums1[i--];
                else nums1[k] = nums2[j--];
            } 
            k--;
        }
    }
};
// @lc code=end

