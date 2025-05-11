/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <cmath>
using namespace std;

// ###INSERT CODE HERE -
struct Tree
{
	int val;
	Tree *left;
	Tree *right;
};
Tree *CreateNode(int x)
{
	Tree *Node = new Tree;
	Node->val = x;
	Node->left = NULL;
	Node->right = NULL;
	return Node;
}
Tree *Insert(Tree *root, int x)
{
	if (!root)
		return CreateNode(x);
	if (x < root->val)
		root->left = Insert(root->left, x);
	else
		root->right = Insert(root->right, x);
	return root;
}
void InputTree(Tree *&root)
{
	int n;
	cout << "Nhap So Luong Node: ";
	cin >> n;
	cout << "Nhap Cac Node: ";
	while (n--)
	{
		int x;
		cin >> x;
		root = Insert(root, x);
	}
}
int height(Tree *root)
{
	if (!root)
		return 0;
	return 1 + max(height(root->left), height(root->right));
}
bool isAVL(Tree *root)
{
	if (!root)
		return true;
	int hl = height(root->left);
	int hr = height(root->right);
	if (abs(hl - hr) > 1)
	{
		return false;
	}
	return isAVL(root->left) && isAVL(root->right);
}
int main()
{
	Tree *T = NULL;
	InputTree(T);
	cout << "AVL: ";
	cout << isAVL(T);
	return 0;
}
