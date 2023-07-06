class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        if(root == NULL) return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        int flag = 0;
    
        while(!q.empty())
        {
            int n = q.size();
            vector<int> per_level(n,0);
            for(int i=0 ; i<n ; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left!=NULL)q.push(temp->left);
                if(temp->right!=NULL)q.push(temp->right);
                if(flag%2 == 0) per_level[i] = temp->val;
                else per_level[n-i-1] = temp->val;
            }
            ans.push_back(per_level);
            flag++;
        }
        return ans;
    }
};
