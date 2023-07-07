class Solution {
public:
    vector<int> rightSideView(TreeNode* root) 
    {
        if(root==NULL) return {};
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            ans.push_back(q.front()->val);
            int n = q.size();
            for(int i=0 ; i<n ; i++)
            {
                if(q.front()->right!=NULL) q.push(q.front()->right);
                if(q.front()->left!=NULL) q.push(q.front()->left);
                q.pop();
            }
        }
        return ans;
    }
};
