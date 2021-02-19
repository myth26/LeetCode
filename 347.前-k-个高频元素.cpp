/*
 * @lc app=leetcode.cn id=347 lang=cpp
 *
 * [347] 前 K 个高频元素
 */

// @lc code=start
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> frequencyForNum;
        for(int num : nums){
            if(frequencyForNum.find(num) != frequencyForNum.end()){
                frequencyForNum[num] = 1; 
            }
            else frequencyForNum[num] += 1;
        }
        vector<vector<int>> buckets(nums.size() + 1);
        for(auto pair : frequencyForNum){
            int frequency = pair.second;
            buckets[frequency].push_back(pair.first);
        }
        vector<int> topK;
        for(int i = buckets.size() - 1; i >= 0 && topK.size() < k; i--){
            for(int j = 0; j < buckets[i].size(); j++){
                topK.push_back(buckets[i][j]);
            }
        }
        return topK;
    }
};
// @lc code=end

