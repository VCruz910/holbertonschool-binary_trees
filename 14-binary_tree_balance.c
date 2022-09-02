#include "binary_trees.h"
/**
 * BTHMeasure - Measuring Assist Function.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Measurements for calculating height
 **/
size_t BTHMeasure(const binary_tree_t *tree)
{
	size_t BTLeft = 0;
	size_t BTRight = 0;

	if (tree == NULL)
	{
		return (0);
	}
	BTLeft = BTHMeasure(tree->left);
	BTRight = BTHMeasure(tree->right);
	if (BTLeft > BTRight)
	{
		return (BTLeft + 1);
	}
	return (BTRight + 1);
}
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Binary Tree Height.
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (-1);
	}
	return (BTHMeasure(tree) - 1);
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: Balance factor of the tree or 0 if tree is NULL;
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
