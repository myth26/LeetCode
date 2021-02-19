/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start

 // Definition for singly-linked list.
 /*
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 */
 #include <stack>
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(-1);
        ListNode* h = result;
        int val = 0;
        int carry = 0;
        while(l1 || l2){
            val = 0;
            if(l1){
                val += l1->val;
                l1 = l1->next;
            }
            if(l2){
                val += l2->val;
                l2 = l2->next;
            }
            h->next = new ListNode((val+carry)%10);
            h = h->next;
            carry = (val+carry)/10;
        }
        if(carry){
            h->next = new ListNode(carry);
        }
        return result->next;
    }
};
// @lc code=end

