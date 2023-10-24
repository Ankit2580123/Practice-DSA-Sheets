class Solution{
  public:
    /*You are required to complete this method*/
    bool ans;
    void solve(Node *root, int height, int &temp){
        if(root==NULL)return;
        if(ans==false)return;
        if(root->left==NULL && root->right==NULL){
            if(temp==-1){//for first time updating the temp
                temp=height;
            }
            else if(height!=temp){
                ans=false;
            }
            return;
        }
        solve(root->left,height+1, temp);
        solve(root->right,height+1, temp);
        
    }
    bool check(Node *root)
    {
        ans=true;
        int temp=-1;
        int height=0;
        solve(root,height,temp);
        return ans;
    }
};