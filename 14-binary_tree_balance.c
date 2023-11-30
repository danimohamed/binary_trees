#include "binary_trees.h"
/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the heigh
 * Return: height of a binary tree otherwise 0
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t height = 0, left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	if (left_height > right_height)
		height = left_height + 1;
	else
		height = right_height + 1;

	return (height);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the heigh
 * Return: balance factor otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int factor = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	factor = tree_height(tree->left) - tree_height(tree->right);

	return (factor);
}
