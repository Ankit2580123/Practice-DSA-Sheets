 class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *root, bool &result){
        if(root==NULL){
            return 0;
        }
        int a=height(root->left,result);
        int b=height(root->right,result);
        if(abs(b-a)>1){
            result=false;
        }
        return 1+max(a,b);
    }
    bool isBalanced(Node *root)
    {
        if(root==NULL){
            return true;
        }
        bool result=true;
        int maxHeight=height(root,result);
        return result;
    }
};