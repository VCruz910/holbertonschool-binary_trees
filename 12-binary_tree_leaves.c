#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: Pointer to the node to check.
 * Return: 1 if node is a leaf, otherwise 0.
 **/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int BTLeaf = 0;

	if (node && !(node->left) && !(node->right))
	{
		BTLeaf = 1;
	}
	return (BTLeaf);
}
/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree
 * to count the number of leaves
 * Return: Number of leaves or NULL.
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_is_leaf(tree))
	{
		return (1);
	}
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
