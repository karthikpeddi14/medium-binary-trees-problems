class Solution {
public:
    int maxpath(TreeNode* root , int& maxi)
    {
        if(root==NULL) return 0;
        
        int lm = maxpath(root->left,maxi);
        int rm = maxpath(root->right,maxi);
        maxi = max(maxi,num+root->val);
        return max(lm,rm) + root->val;

    }
    int maxPathSum(TreeNode* root) 
    {
        int maxi = INT_MIN;
        maxpath(root,maxi);
        return maxi;
    }
};
