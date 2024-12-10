#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Traverses a binary tree using depth
 *
 * @tree: Pointer to the root node of the tree to traverse
 * Return: return i
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);

	while (tree != NULL)
	{
		i++;
		tree = tree->parent;
	}
	return (i);
}
