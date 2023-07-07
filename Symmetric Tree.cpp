class Solution {
public:
    bool ans(TreeNode* l, TreeNode* r)
    {
        if(l==NULL && r==NULL) return true;
        else if(l==NULL || r==NULL) return false;
        if(l->val!=r->val) return false;
        
        return ans(l->left, r->right) && ans(l->right,r->left);
    }
    bool isSymmetric(TreeNode* root) 
    {
        if(root==NULL) return true;
        return ans(root->left,root->right);
    }
};
