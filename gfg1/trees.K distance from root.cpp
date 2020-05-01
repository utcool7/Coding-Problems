//https://practice.geeksforgeeks.org/problems/k-distance-from-root/1

//time : O(n)
//space :O(n)

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// function should print the nodes at k distance from root
void printKdistance(struct Node *root, int k)
{
  // Your code here
  if(root == NULL)
      return;
  if(k == 0 )
  {
      cout<<root->data<<" ";
      return ;
  }
  printKdistance(root->left,k - 1);
  printKdistance(root->right,k - 1);
  
  
}
