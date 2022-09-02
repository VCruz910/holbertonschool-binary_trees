#include "binary_trees.h"
/**
 * BTParent - Checks for parents in tree.
 * @node: Pointer to node for checking.
 * Return: 1 Success, 0 Failure.
 **/
int BTParent(const binary_tree_t *node)
{
	int Parent = 0;

	if (node && (node->left || node->right))
	{
		Parent = 1;
	}
	return (Parent);
}
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * Return: Number of parents or 0.
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (BTParent(tree))
	{
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	}
	return (0);
}
