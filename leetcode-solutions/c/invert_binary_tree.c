#include <stdlib.h>

struct node
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* invert_binary_tree(struct node* root)
{
	if(root == NULL) return NULL;
	struct node* left = invert_binary_tree(root->left);
	struct node* right = invert_binary_tree(root->right);
	root->left = right;
	root->right = left;
	return root;
}