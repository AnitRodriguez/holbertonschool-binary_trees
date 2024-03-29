#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: data
 * Return: 1 child counted
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	if (!tree->left && tree->right)
		return (binary_tree_nodes(tree->right) + 1);
	if (tree->left && !tree->right)
		return (binary_tree_nodes(tree->left) + 1);
	return (binary_tree_nodes(tree->right) +
			binary_tree_nodes(tree->left) + 1);
}
