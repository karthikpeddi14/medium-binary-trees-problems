class Solution {
public:
    void takenodes (TreeNode* root , vector<vector<int>>& v, int hor_index, int ver_index)
    {
        if(root == NULL) return;
        v.push_back({hor_index,ver_index,root->val});
        takenodes(root->left, v, hor_index-1,ver_index+1);
        takenodes(root->right , v,hor_index+1,ver_index+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        if(root==NULL) return {};
        vector<vector<int>> v;
        takenodes(root,v,0,0);
        sort(v.begin(),v.end());
        vector<vector<int>> ans;
        vector<int> temp;
        for(int i=0 ; i<v.size() ; i++)
        {
            if(i==0 || v[i][0]==v[i-1][0])
            {
               temp.push_back(v[i][2]); 
            }
            else
            {
                ans.push_back(temp);
                temp.clear();
                temp.push_back(v[i][2]);
            }
        }
        if(!temp.empty()) ans.push_back(temp);
        return ans;
    }
};
