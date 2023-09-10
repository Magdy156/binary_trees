#include "binary_trees.h"
int tree_is_perfect(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:  pointer to the root node of the tree to check
 * Return: 1 if perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (!tree)
		return (0);
	result = tree_is_perfect(tree);
	if (result)
		return (1);
	return (0);
}
/**
 * tree_is_perfect - checks if a tree is perfect or not
 * @tree: tree to check
 * Return: 0 if is not a perfect
 */

int tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + tree_is_perfect(tree->left);
		right = 1 + tree_is_perfect(tree->right);
		if (right == left && right != 0 && left != 0)
			return (right);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	return (0);
}
