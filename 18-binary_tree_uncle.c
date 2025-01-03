#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: uncle of a node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (NULL);
}
