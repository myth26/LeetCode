/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double result = 0;
        int m = nums1.size();
        int n = nums2.size();
        int i = 0, j = 0;
        int ansPos;
        //if((m + n)
        vector<int> ans;
        while(i < m || j < n){
            if(ans.size() > (m + n)/2) break;
            if(i == m){
                ans.push_back(nums2[j++]);
            }
            else if(j == n){
                ans.push_back(nums1[i++]);
            }
            else if(ans.size() <= (m + n)/2)
                ans.push_back(nums1[i] > nums2[j] ? nums2[j++] : nums1[i++]);
        }
        if((m+n) % 2 != 0)
            return (ans[ans.size()-1]*1.0);
        else return ((ans[ans.size()-2] + ans[ans.size()-1]) * 1.0 / 2);    
    }
};
// @lc code=end

