#include "binary_trees.h"
/**
 * binary_tree_is_root - function that check if a given node is root or no
 * @node: node
 * Return: 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (!node || node->parent ? 0 : 1);
}
