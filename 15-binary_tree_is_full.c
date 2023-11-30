#include "binary_trees.h"
/**
 * is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: 1 if is full otherwise 0
 */
int is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL && tree->right) ||
		(tree->left && tree->right == NULL))
		return (1);
	full += is_full(tree->left);
	full += is_full(tree->right);

	return (full);

}
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: 1 if is full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL || is_full(tree) > 0)
		return (0);

	return (1);
}
