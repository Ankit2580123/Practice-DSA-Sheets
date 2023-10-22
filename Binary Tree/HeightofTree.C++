class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* root){
        if(root==NULL)return 0;
        int a=height(root->left)+1;
        int b=height(root->right)+1;
        return max(a,b);
    }
};