/*
 * @lc app=leetcode.cn id=1379 lang=cpp
 *
 * [1379] 找出克隆二叉树中的相同节点
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution
{
public:
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned,
                            TreeNode *target)
    {
        if (original == target)
            return cloned;
        if (original == NULL || cloned == NULL)
            return NULL;
        TreeNode *left = getTargetCopy(original->left, cloned->left, target);
        TreeNode *right = getTargetCopy(original->right, cloned->right, target);
        return left == NULL ? right : left;
    }
};
// @lc code=end
