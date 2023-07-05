class Solution {
public:
    
    int maxDepth(TreeNode* root) 
    {
        if(root == NULL) return 0;
        int lm = maxDepth(root->left);
        int rm = maxDepth(root->right);
        return 1+max(lm,rm);
    }
};
