#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
  int key;
  struct Node *left;
  struct Node *right;
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

void printLevel(Node *root)
{
    if(root==NULL)return;

    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        Node *curr=q.front();

        q.pop();

        cout<<curr->key<<" ";

        if(curr->left!=NULL)
            q.push(curr->left);

        if(curr->right!=NULL)
            q.push(curr->right);
    }
}

int main()
{
    // take 7 nodes//
    int n,x;
    cout<<"Enter all the input : ";
    cin>>n;

    queue<Node*> q1;
    cin>>x;
    Node *obj = new Node(x); // root passing //
    q1.push(obj);
    n--;
    bool f=0;
    while(n--)
    {
        int data;
        cin>>data;
        Node *o1=q1.front();
        if(data!=-1)
        {
            Node *o=new Node(data);
            if(f==0)
            {
                o1->left=o;
                f=1;
            }
            else
            {
                o1->right=o;
                f=0;
                q1.pop();
            }
            q1.push(o);
        }
        else
        {
            if(f==0)
            {
                f=1;
            }
            else
            {
                f=0;
                q1.pop();
            }
        }
    }
	printLevel(obj);
}
