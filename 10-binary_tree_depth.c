#include "binary_trees.h"
/**
 * BTDMeasure - Depth Measure Assist.
 * @tree: Pointer to the node to measure the depth.
 * Return: Depth Measurements.
 **/
size_t BTDMeasure(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (-1);
	}
	return (BTDMeasure(tree->parent) + 1);
}
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 * Return: Depth of a node.
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (BTDMeasure(tree));
}
