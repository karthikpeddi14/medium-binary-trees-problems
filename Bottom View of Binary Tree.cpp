class Solution {
  public:
    vector <int> bottomView(Node *root) 
    {
        queue<pair<Node*, int>> q;
        map<int,int> mpp;
        vector<int> ans;
        if(root==NULL) return ans;
        q.push({root,0});
        while(!q.empty())
        {
            int n=q.size();
            while(n--)
            {
                auto it = q.front();
                q.pop();
                mpp[it.second] = it.first->data;
                if(it.first->left!=NULL) q.push({it.first->left,it.second-1});
                if(it.first->right!=NULL) q.push({it.first->right, it.second+1});
             }
        }
        
        for(auto it:mpp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
