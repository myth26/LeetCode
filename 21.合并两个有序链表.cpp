/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head;
        if(!l1 && !l2){
            return head;
        }
        else if(!l1 && l2) return l2;
        else if(l1 && !l2) return l1;
        if(l1->val <= l2->val){
            head = l1;
            l1 = l1->next;
        }
        else{
            head = l2;
            l2 = l2->next;
        }
        ListNode* curr = head;
        while(l1 && l2){
            if(l1->val < l2->val){
                curr->next = l1;
                l1 = l1->next;
                curr = curr->next;
            } 
            else{
                curr->next = l2;
                l2 = l2->next;
                curr = curr->next;
            }
        }
        while(l1){
            curr->next = l1;
            l1 = l1->next;
            curr = curr->next;
        }
        while(l2){
            curr->next = l2;
            l2 = l2->next;
            curr = curr->next;
        }
        return head;
    }
};
// @lc code=end

