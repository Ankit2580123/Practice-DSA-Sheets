void helper(Node *root, vector<int> &ans){
    if(root==NULL){
        return;
    }
    helper(root->left,ans);
    helper(root->right,ans);
    ans.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
  vector<int>ans;
  if(root==NULL){
      return ans;
  }
  helper(root,ans);
  return ans;
}