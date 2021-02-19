/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第N个节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* front = head;
        ListNode* back = head;
        int i = 0;
        while(front->next){
            front = front->next;
            i++;
            if(i > n){
                back = back->next;
            }
        }
        if(i == 0) return nullptr;
        if(i == n - 1) return head->next;
        back->next = back->next->next;
        return head;
    }
};
// @lc code=end

