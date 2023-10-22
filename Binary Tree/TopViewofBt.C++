class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int>ans;
        queue<pair<Node*,int>>q;
        map<int,int>mp;
        if(root==NULL)return ans;
        q.push({root,0});
        while(!q.empty()){
            Node *val=q.front().first;
            int height=q.front().second;
            if(!mp[height]){
                mp[height]=val->data;
            }
            q.pop();
            if(val->left)q.push({val->left,height-1});
            if(val->right)q.push({val->right,height+1});
        }
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
       
    }

};
