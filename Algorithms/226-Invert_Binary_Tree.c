/*
 * Invert a binary tree.
 *
 *      4
 *    /   \
 *   2     7
 *  / \   / \
 * 1   3 6   9
 *
 *      to
 *
 *       4
 *     /   \
 *    7     2
 *   / \   / \
 *  9   6 3   1
 */

#include <stdio.h>

struct TreeNode{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

struct TreeNode* invertTree(struct TreeNode* root){
	if(root==NULL)return root;

	invertTree(root->left);
	invertTree(root->right);

	struct TreeNode *swap = root->left;
	root->left = root->right;
	root->right = swap;

	return root;
}

int main(void){
	//测试代码从略……

	return 0;
}
