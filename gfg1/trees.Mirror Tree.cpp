//https://practice.geeksforgeeks.org/problems/mirror-tree/1

// time : O(n)
// space : O(n)

/* Should convert tree to its mirror */
void mirror(Node* node) 
{
     // Your Code Here
     if(node == NULL)
         return ;
     auto temp = node->left;
     node->left = node->right;
     node->right = temp ;
     mirror( node -> left );
     mirror( node -> right );
    
}
