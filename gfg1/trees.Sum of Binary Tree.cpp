// https://practice.geeksforgeeks.org/problems/sum-of-binary-tree/1

time : O(n)
space :O(n)

/*Structure of the node of the binary tree
struct Node
{
	int key;
	Node* left, *right;
};
*/
// Function should return the sum of all the elements
// of the binary tree
long int sumBT(Node* root)
{
    // Code here
    if(root == NULL)
        return 0;
    return root->key + sumBT(root->left) + sumBT(root->right);    
}
