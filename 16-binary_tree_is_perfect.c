#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height_perfect - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: Height of the tree
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
 * binary_tree_size_perfect - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: Size of the binary tree
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
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_perfect;
	int right_perfect;

	if (tree == NULL)
		return (0);

	left_perfect = binary_tree_height_perfect(tree->left);
	right_perfect = binary_tree_height_perfect(tree->right);

	if (left_perfect != right_perfect) /*check si la hauteur est la meme*/
		return (0);
	if (tree->left == NULL && tree->right == NULL) /*check si c'est une leaf*/
		return (1);
	if (tree->left && tree->right) /*s'assure que les 2 enfants sont parfait*/
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	return (0);
}
