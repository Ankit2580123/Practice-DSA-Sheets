class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* root) {
        if(root==NULL)return;// Base Case
        
        Node *temp=root->left;  ///Small Calculations
        root->left=root->right;
        root->right=temp;
        
        mirror(root->left);  //Recursive calls
        mirror(root->right);
    }
};