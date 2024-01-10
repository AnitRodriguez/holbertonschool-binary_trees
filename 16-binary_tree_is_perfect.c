#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: Is a pointer to the root node of the tree to check.
 * Return: 0 if the tree is NULL.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right))
			return (1);
	}
		return (0);
}
/**
 * binary_tree_height - Function that measures the depth of a node in a
 * binary tree.
 * @tree: Is a pointer to the node ina a binary tree
 * Return: 0 if the tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	while (tree)
	{
		if (tree->left != NULL)
		{
			count++;
			tree = tree->left;
		}
		else if (tree->right != NULL)
		{
			count++;
			tree = tree->right;
		}
		else
			return (count);
	}
	return (0);
}
