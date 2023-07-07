class Solution {
public:
    void leftbound(Node* root , vector<int>& ans)
    {
        Node* curleft = root->left;
        while(curleft)
        {
            ans.push_back(curleft->data);
            if(curleft->left!=NULL) curleft = curleft->left;
            else curleft = curleft->right;
        }
        if(ans.size()>=2) ans.pop_back();
    }
    
    void rightbound(Node* root , vector<int>& ans)
    {
        Node* curright = root->right;
        stack<int> st;
        while(curright)
        {
            st.push(curright->data);
            if(curright->right!=NULL) curright = curright->right;
            else curright = curright->left;
        }
        
        if(!st.empty()) st.pop();
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
    }
    
    void addleaves(Node* root , vector<int>& ans)
    {
        if(root==NULL) return;
        if(root->left == NULL && root->right==NULL) ans.push_back(root->data);
        addleaves(root->left,ans);
        addleaves(root->right,ans);
    }
    vector <int> boundary(Node *root)
    {
        if(root==NULL) return {};
        if(root->left == NULL && root->right==NULL) return {root->data};
        vector<int> ans;
        ans.push_back(root->data);
        leftbound(root,ans);
        addleaves(root,ans);
        rightbound(root,ans);
        return ans;
    }
};
