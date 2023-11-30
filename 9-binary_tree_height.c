#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the heigh
 * Return: height of a binary tree otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		height = left_height + 1;
	else
		height = right_height + 1;

	return (height);
}
