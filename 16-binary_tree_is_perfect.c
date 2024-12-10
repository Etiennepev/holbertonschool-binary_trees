#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the leaves
 * Return: Number of leaves in the tree
 */
int binary_tree_height_perfect(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	left_height = binary_tree_height_perfect(tree->left);
	right_height = binary_tree_height_perfect(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: the height of the binary tree.
 *int binary_tree_size(const binary_tree_t *tree)
 */
int binary_tree_size_perfect(const binary_tree_t *tree)
{
	int left_size = 0;
	int right_size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_size = binary_tree_size_perfect(tree->left);
	right_size = binary_tree_size_perfect(tree->right);
	return ((left_size + right_size) + 1);
}
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: the height of the binary tree.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_perfect;
	int right_perfect;

	if (tree == NULL)
		return (0);

	left_perfect = binary_tree_height_perfect(tree->left);
	right_perfect = binary_tree_height_perfect(tree->right);

	if (left_perfect != right_perfect)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	return (0);
}
