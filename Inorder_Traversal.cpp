#include<bits/stdc++.h>
using namespace std;
class TNode
{
    public:
    int data;
    TNode *left;
    TNode *right;
    TNode(int val)
    {
        data = val;
        left = right = nullptr;
    }
};


//  iterative process Inorder Traversal //
void iterative_Inorder(TNode *root)
{
    stack<TNode *> s;
    TNode *curr = root;
 
    while (curr != NULL || s.empty() == false)
    {
        while (curr !=  NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";
        curr = curr->right;
 
    } /* end of while */
}

// Recursive Process Inorder Traversal //
void recursive_Inorder(TNode *root)
{
    if(root == nullptr)
    {
        return;
    }
    else
    {
        recursive_Inorder(root->left);
        cout<<root->data<<" ";
        recursive_Inorder(root->right);
    }
}

/**********
if we need to return vector then this way we can right : Leetcode style//
class Solution {
public:
   void pot(TreeNode*root,vector<int>&v)
    {    if(root==NULL) return;
         pot(root->left,v);
         v.push_back(root->val);
         pot(root->right,v);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        pot(root,v);
        return v;
    }
};
***********/


int main()
{
     /* Constructed binary tree is
              1
            /   \
          2      3
        /  \
      4     5
    */
    TNode *root = new TNode(1);
    root->left        = new TNode(2);
    root->right       = new TNode(3);
    root->left->left  = new TNode(4);
    root->left->right = new TNode(5);

    cout<<"Iterative Inorder Traversal : ";
    iterative_Inorder(root);

    cout<<endl<<"Recursive Inorder Traversal : ";
    recursive_Inorder(root);
    return 0;
}
