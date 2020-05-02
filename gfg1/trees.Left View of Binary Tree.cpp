// https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1


// time : O(n)
// space :O(depth)

void printLeftView(Node *root , vector<bool> &check, int level )
{
    if(!root) return;

    if(check[level] == false)
    {
        check[level] = true;
        cout<<root->data <<" ";
        
    }
    printLeftView(root->left , check , level + 1);
    printLeftView(root->right , check , level + 1);

    
}
int height(Node *root)
{
    if(root == NULL)
        return 0;
    return max(height(root-> left), height(root->right)) + 1;    
}
// A wrapper over leftViewUtil()
void leftView(Node *root)
{
   // Your code here
   int h = height(root);
   vector<bool> check(h,false);
   printLeftView(root,check,0);

   
}


//time : O(n)
//space : O(n)

void printLeftView(Node *root , int level,int *maxLevel)
{
    if(root == NULL) 
       return ;
    if(level > *maxLevel)
    {
        cout<<root->data<<" ";
        *maxLevel = level ;
    }
    printLeftView(root->left, level + 1 ,maxLevel);
    printLeftView(root->right , level +1 ,maxLevel);
}
void leftView(Node *root)
{
   // Your code here
   int maxLevel = 0;
   printLeftView(root , 1,&maxLevel);
}