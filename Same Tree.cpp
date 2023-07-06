class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(p==NULL) return q==NULL;
        else if(p==NULL || q==NULL) return false;

        if(p->val != q->val) return false;
        bool a = isSameTree(p->left, q->left);
        bool b = isSameTree(p->right , q->right);
        return a&&b;
    }
};
