class Solution {
public:
    int height(TreeNode *root, int& maxi)
    {
        if(root == NULL) return 0;
        int lm = height(root->left,maxi);
        int rm = height(root->right,maxi);
        maxi = max(maxi,lm+rm);
        return 1+max(lm,rm);
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        int maxi = 0;
        height(root,maxi);
        return maxi;
    }
};
