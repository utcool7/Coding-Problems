//time : O(n)
//space : O(n)

void deleteTree(Node *root)
{
    if(root == NULL)
        return NULL;

    deleteNode(root->left);    
    deleteNode(root->right);
    cout<< root->data << " ";
    root = NULL;
    return root ;
        
}