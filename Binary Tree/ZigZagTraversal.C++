class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int>ans;
    	if(root==NULL)return ans;
    	queue<Node *>q;
    	q.push(root);
    	int level=1;
    	while(!q.empty()){
    	    vector<int>tempVect;
    	    int size=q.size();
    	    while(size--){
    	        Node *temp=q.front();
    	        tempVect.push_back(temp->data);
    	        q.pop();
    	        if(temp->left)q.push(temp->left);
    	        if(temp->right)q.push(temp->right);
    	       
    	    }
    	    if(level%2==0){
    	        reverse(tempVect.begin(),tempVect.end());
    	    }
    	        for(int i=0; i<tempVect.size(); i++){
    	            ans.push_back(tempVect[i]);
    	        }
    	    level++;
    	}
    	return ans;
    }
};