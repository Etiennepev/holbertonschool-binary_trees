#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a new binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to assign to the new node
 * Return: a pointer to the uncle node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	else
		new_node->left = NULL;
	parent->left = new_node;

	return (new_node);
}
