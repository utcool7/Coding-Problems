//https://practice.geeksforgeeks.org/problems/odd-even-level-difference/1

time : O(log n)
space : O(n)

/* The Node structure is
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/*You are required to complete this function*/
int getLevelDiff(Node *root)
{
   //Your code here
   if(root == NULL)
       return 0;
   return root->data - getLevelDiff(root->left) - getLevelDiff(root->right);       
}

