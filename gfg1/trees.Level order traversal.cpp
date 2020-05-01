//https://practice.geeksforgeeks.org/problems/level-order-traversal/1/

//time : O(h*logn)
//space : O(n)
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 

//You are required to complete this method

int height(Node* node)
{
    if(node == NULL)
        return 0;
    return max(height(node->left),height(node->right)) + 1;    
}
void level(Node* node , int k)
{
    if(node == NULL)
        return ;
    if(k == 0)
    {
        cout<<node->data << " ";
        return;
    }
    level(node->left,k-1);
    level(node->right, k-1);
    
}
void levelOrder(Node* node)
{
  //Your code here
  int depth = height(node);
  for(int i = 0 ;i <= depth ; i++)
  {
      level(node, i);
  }
  
}