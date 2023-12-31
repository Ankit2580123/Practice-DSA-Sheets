void helper(Node *root, vector<int> &ans){
    if(root==NULL){
        return;
    }
    ans.push_back(root->data);
    helper(root->left,ans);
    helper(root->right,ans);
}
vector <int> preorder(Node* root)
{
  vector<int>ans;
  if(root==NULL){
      return ans;
  }
  helper(root,ans);
  return ans;
}c