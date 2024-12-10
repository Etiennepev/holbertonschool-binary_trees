#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height_child - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: Height of the tree, or 0 if the tree is NULL
 */
int binary_tree_height_child(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_height = binary_tree_height_child(tree->left);
	right_height = binary_tree_height_child(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: Balance factor of the tree, or 0 if the tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_balance = 0;
	int right_balance = 0;

	if (tree == NULL)
		return (0);

	left_balance = binary_tree_height_child(tree->left);
	right_balance = binary_tree_height_child(tree->right);
	return (left_balance - right_balance);
}
