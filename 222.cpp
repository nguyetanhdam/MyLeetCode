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
            return (1 << lH) + countNodes(root->right); // Count nodes on the right subtree
        else
            return (1 << rH) + countNodes(root->left); // Count nodes on the left subtree
    }
};
