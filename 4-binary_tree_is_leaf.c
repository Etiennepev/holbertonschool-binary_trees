#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Creates a new binary tree node
 *
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to assign to the new node
 * Return: a pointer to the uncle node
 */


int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}

