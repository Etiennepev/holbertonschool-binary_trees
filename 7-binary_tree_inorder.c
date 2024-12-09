#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node
 * @func: pointer to a function to call for each node's value
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}
