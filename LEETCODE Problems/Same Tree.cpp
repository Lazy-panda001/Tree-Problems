class Solution 
{
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(p == nullptr && q == nullptr )  // 1st check
        {
            return true;
        }
        else if ((p && q == nullptr) || (p == nullptr && q))  // 2nd check
        {
            return false;
        }
        else if(p->val == q->val)
        {
           return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        }
        else
            return false;
        
    }
};
