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
 * BTParent2 - Checks for parents in tree.
 * @node: Pointer to node for checking.
 * Return: 1 Success, 0 Failure.
 **/
int BTParent2(const binary_tree_t *node)
{
	int Parent = 0;

	if (node && node->left && node->right)
	{
		Parent = 1;
	}
	return (Parent);
}
/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if tree is full, 0 otherwise.
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (binary_tree_is_leaf(tree))
	{
		return (1);
	}
	if (BTParent2(tree))
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
