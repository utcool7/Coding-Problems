//https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1

//time :O(n^2)
//space :O(n)

/* A tree Node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

int height(Node *root)
{
    if(root == NULL)
        return 0;
    return max(height(root->left),height(root->right)) + 1;        
}

void level(Node *root, int k)
{
    if(root == NULL)
        return ;
    if(k == 0)
    {
        cout<<root->data <<" ";
        return ;
    }
    level(root->left, k - 1);
    level(root->right,k - 1);
}
void reversePrint(Node *root)
{
    //Your code here
    int h = height(root);
    for(int i= h ; i >=0 ; i--)
    {
        level(root,i);
    }
}


//time :O(n)
//space : O(n)

void reversePrint(Node *root)
{
    //Your code here
    queue <Node*> q;
    stack <Node* > s;
    q.push(root);
    while(!q.empty())
    {
        Node* deeper = q.front();
        q.pop();
        s.push(deeper);
        if(deeper->right != NULL)
        {
            q.push(deeper->right);
        }
        if(deeper->left != NULL)
        {
            q.push(deeper -> left);
        }
        
    }
    while(!s.empty())
    {
        cout<<s.top()->data<<" ";
        s.pop();
    }
}