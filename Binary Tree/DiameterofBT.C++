class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node *root , int &ans){
        if(root==NULL)return 0;
        int left=height(root->left,ans);
        int right=height(root->right,ans);
        ans=max(ans,left+right+1);
        return 1+max(left,right);
    }
    int diameter(Node* root) {
        int ans=0;
        height(root,ans);
        return ans;
    }
};