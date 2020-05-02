//https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1

// time : O(n)
// space :O(depth)

// Should print right view of tree
void printLeftView(Node *root , vector<bool> &check, int level )
{
    if(!root) return;

    if(check[level] == false)
    {
        check[level] = true;
        cout<<root->data <<" ";
        
    }
    printLeftView(root->right , check , level + 1);
    printLeftView(root->left , check , level + 1);

    
}
int height(Node *root)
{
    if(root == NULL)
        return 0;
    return max(height(root-> left), height(root->right)) + 1;    
}
// A wrapper over leftViewUtil()
void rightView(Node *root)
{
   // Your code here
   int h = height(root);
   vector<bool> check(h,false);
   printLeftView(root,check,0);

   
}




//time : O(n)
//space : O(n)

void printRightView(Node *root , int level , int *maxLevel )
{
    if(root == NULL)   return ;
    if(level > *maxLevel)
    {
        cout<<root->data<<" ";
        *maxLevel = level;
    }
    printRightView(root->right, level + 1 , maxLevel);
    printRightView(root->left, level + 1 , maxLevel );
}
void rightView(Node *root)
{
   // Your Code here
   int maxLevel = 0 ;
   printRightView(root , 1 , &maxLevel);
}