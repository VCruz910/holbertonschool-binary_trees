#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the
 * right-child of another node.
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 * Return: Pointer to the created node,
 * or NULL on failure or if parent is NULL.
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	NTNode->left = NULL;
	NTNode->right = parent->right;

	if (parent->right != NULL)
	{
		parent->right->parent = NTNode;
	}
	parent->right = NTNode;
	return (NTNode);
}

