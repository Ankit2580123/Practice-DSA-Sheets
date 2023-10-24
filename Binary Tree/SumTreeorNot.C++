class Solution
{
    public:
    bool ans=true;
    int solve(Node *root){
        if(root==NULL)return 0;
        if(root->left==NULL && root->right==NULL)return root->data;
        if(ans==false)return 0;
        int l=solve(root->left);
        int r=solve(root->right);
        if(l+r!=root->data)ans=false;
        return l+r+root->data;
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         ans=true;
         solve(root);
         return ans;
    }
};