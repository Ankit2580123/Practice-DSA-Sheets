class Solution{
    public:
    int SearchIndex(int in[],int term,int end){
        for(int i=end; i>=0; i--){
            if(in[i]==term){
                return i;
            }
        }
    }
    
    Node* solve(int in[],int pre[],int start, int end, int &ptr){
        if(start>end)return NULL;
        Node *newNode=new Node(pre[ptr]);
        int mid=SearchIndex(in,pre[ptr],end);
        ptr++;
        newNode->left=solve(in,pre,start,mid-1,ptr);
        newNode->right=solve(in,pre,mid+1,end,ptr);
        return newNode;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int ptr=0;
        return solve(in,pre,0,n-1,ptr);
    }
};