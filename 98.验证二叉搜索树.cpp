/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        bool ans = true;
        dfs(root,ans);
        return ans;
    }
    void dfs(TreeNode* root, bool& ans){
        if(root->left){
            if(root->left->val >= root->val) ans = false;
            dfs(root->left,ans);
        }
        if(root->right){
            if(root->right->val <= root->val) ans = false;
            dfs(root->right,ans);
        }
    }
};
// @lc code=end

