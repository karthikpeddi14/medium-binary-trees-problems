class Solution {
public:
    void rightview(TreeNode*root , int index, vector<int> & ans)
    {
        if(root == NULL) return;
        if(index==ans.size())ans.push_back(root->val);
        rightview(root->right, index+1, ans);
        rightview(root->left,index+1,ans);

    }
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int> ans;
        rightview(root,0,ans);
        return ans;
    }
};

