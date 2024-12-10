#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: sibling of a node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent == NULL)
		return (NULL);
	if (node == node->parent->right)
		return (node->parent->left);
	if (node == node->parent->left)
		return (node->parent->right);
	return (NULL);
}
