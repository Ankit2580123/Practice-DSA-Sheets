class Solution {
  public:
    vector <int> bottomView(Node *root) {
        queue<pair<Node* ,int>>q;
        vector<int>ans;
        map<int,int>mp;
        if(root==NULL)return ans;
        q.push({root,0});
        while(!q.empty()){
            int height=q.front().second;
            Node *val=q.front().first;
            q.pop();
            mp[height]=val->data;
            if(val->left){
                q.push({val->left,height-1});
            }
             if(val->right){
                q.push({val->right,height+1});
            }
        }
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};