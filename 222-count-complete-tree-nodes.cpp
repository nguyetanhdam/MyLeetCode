/*
Given the root of a complete binary tree, return the number of the nodes in the tree.

According to Wikipedia, every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes inclusive at the last level h.

Design an algorithm that runs in less than O(n) time complexity.
*/

class Solution {
public:
    int getHeight(TreeNode* root) {
        if (!root)
            return 0;
        return 1 + getHeight(root->left);
    }

    int countNodes(TreeNode* root) {
        if (!root)
            return 0;

        int lH = getHeight(root->left);
        int rH = getHeight(root->right);

        if (lH == rH)
            return (1 << lH) + countNodes(root->right);
        else
            return (1 << rH) + countNodes(root->left);
    }
};
