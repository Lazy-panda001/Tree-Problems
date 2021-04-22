class Solution 
{
public:
    void invert(TreeNode *curr)
    {
        if(curr == nullptr)
            return;
        // kind of postorder
        invert(curr->left);
        invert(curr->right);
        
        TreeNode* temp = curr->left;
        curr->left = curr->right;
        curr->right = temp;
    }
    TreeNode* invertTree(TreeNode* root) 
    {
        invert(root);
        return root;
    }
};
