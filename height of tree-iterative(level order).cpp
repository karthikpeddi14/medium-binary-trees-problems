class Solution {
public:
    int maxDepth(TreeNode* root) 
    {
        if(root == NULL ) return  0;
        queue<pair<TreeNode*,int>> q;
        int max_depth = 1;
        q.push({root,1});
        while(!q.empty())
        {
            TreeNode* temp = q.front().first;
            int depth = q.front().second;
            q.pop();
            if(temp->left!=NULL)
            {
                q.push({temp->left,depth+1});
                max_depth = max(max_depth,depth+1);
            }
            if(temp->right!=NULL)
            {
                q.push({temp->right,depth+1});
                max_depth = max(max_depth,depth+1);
            }
        }
        return max_depth;
    }
};
