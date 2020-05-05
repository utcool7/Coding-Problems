//time : O(n)
//space: O(n)

class Solution {
public:
    void invert(TreeNode* root)
    {
        if(root == NULL)
            return ;
        invertTree(root -> left);
        invertTree(root -> right);
        TreeNode* temp = root -> left ;
        root -> left = root -> right ;
        root -> right = temp ;
        
    }
    TreeNode* invertTree(TreeNode* root) {
        
        if(root == NULL)
            return NULL;
        invert(root);
        return root;
    }
};