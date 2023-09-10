#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree
 * to measure the balance factor
 * Return: the balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (!tree)
		return (0);

	left = ((int)binary_tree_height(tree->left));
	right = ((int)binary_tree_height(tree->right));
	return (left - right);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  is a pointer to the root node of the tree
 * to measure the height.
 * Return: the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left += 1 + binary_tree_height(tree->left);

	if (tree->right)
		right += 1 + binary_tree_height(tree->right);
	return (left > right ? left : right);
}
