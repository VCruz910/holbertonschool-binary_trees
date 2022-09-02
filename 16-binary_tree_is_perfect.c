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
 * BTHeight - Measures tree's height.
 * @tree: Pointer to tree.
 * Return: Tree's height.
 **/
int BTHeight(const binary_tree_t *tree)
{
	int BTLeft = 0, BTRight = 0;

	if (tree == NULL)
	{
		return (-1);
	}
	BTLeft = BTHeight(tree->left);
	BTRight = BTHeight(tree->right);
	if (BTLeft > BTRight)
	{
		return (BTLeft + 1);
	}
	return (BTRight + 1);
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if tree is perfect, 0 otherwise.
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && BTHeight(tree->left) == BTHeight(tree->right))
	{
		if (BTHeight(tree->left) == -1)
		{
			return (1);
		}
		if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
		{
			return (1);
		}
		if (BTParent2(tree))
		{
			return (binary_tree_is_perfect(tree->left) &&
					binary_tree_is_perfect(tree->right));
		}
	}
	return (0);
}
