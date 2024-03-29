#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node.
 * @node:  is a pointer to the node to find the uncle.
 * Return: NULL if the node is NULL or if the node has no uncle.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (binary_tree_sibling(node->parent));

}
#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node:  is a pointer to the node to find the sibling.
 * Return: NULL if the node is NULL or the parent or if the node has no sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
