#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 * Return: Pointer to the created node,
 * or NULL on failure or if parent is NULL.
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NTNode;

	if (parent == NULL)
	{
		return (NULL);
	}
	NTNode = malloc(sizeof(binary_tree_t));
	if (NTNode == NULL)
	{
		return (NULL);
	}
	NTNode->parent = parent;
	NTNode->n = value;
	NTNode->left = parent->left;
	NTNode->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = NTNode;
	}
	parent->left = NTNode;
	return (NTNode);
}
