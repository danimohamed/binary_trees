#include "binary_trees.h"
/**
 * binary_tree_nodes - measures the nodes count of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of nodes of a binary tree otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	return (nodes);
}
