#include<bits/stdc++.h>
 
using namespace std;
 
struct node
{
    int data;
    struct node* left;
    struct node* right;
};


 
struct node* newnode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
 

bool print_ancestors(struct node *root, int target)
{
    if (root == NULL)
        return false;
 
    if (root->data == target)
        return true;
 
    if ( print_ancestors(root->left, target) || print_ancestors(root->right, target) )
    {
        cout << root->data << " ";
        return true;
    }
    return false;
}

int main()
{

  struct node *root = newnode(5);
  root->left        = newnode(4);
  root->right       = newnode(3);
  root->left->left  = newnode(2);
  root->left->right = newnode(1);
  root->left->left->left  = newnode(6);
 
  print_ancestors(root, 6);
  return 0;
}