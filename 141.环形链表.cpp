/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <map>
using namespace std;
class Solution {
public:
    bool hasCycle(ListNode* head) {
        if(!head) return false;
        ListNode* l1 = head;
        ListNode* l2 = head->next;
        while(l1 != nullptr && l2 != nullptr && l2->next != nullptr){
            if(l1 == l2) return true;
            l1 = l1->next;
            l2 = l2->next->next;
        }
        return false;
    }
};
// @lc code=end

