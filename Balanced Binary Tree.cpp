class Solution {
public:
    int height(TreeNode* root)
    {
        if(root==NULL) return 0;
        int lm = height(root->left);
        int rm = height(root ->right);
        return 1+max(lm,rm);
    }
    bool isBalanced(TreeNode* root) 
    {
        if(root == NULL) return true;

        if(abs(height(root->left)-height(root->right))<=1) 
        {
            return isBalanced(root->left) && isBalanced(root->right);
        } 
        return false;
    }
};
