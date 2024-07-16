#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

void InOrder(Node *root)
{
    if(root == NULL) return;

    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PreOrder(Node *root)
{
    if(root == NULL) return;

    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(Node *root)
{
    if(root == NULL) return;
    
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout<<"Inorder Traversal: ";
    InOrder(root);
    cout<<endl;

    cout<<"PreOrder Traversal: ";
    PreOrder(root);
    cout<<endl;

    cout<<"PostOrder Traversal: ";
    PostOrder(root);
    cout<<endl;

    return 0;
}
