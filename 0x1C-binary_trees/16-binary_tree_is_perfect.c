#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root of tree
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree) + 1 == _pow(2, binary_tree_height(tree) + 1));
}

/**
 * binary_tree_size - calculates the size of the tree
 * @tree: pointer to root of tree
 *
 * Return: size of tree or 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
}

/**
 * binary_tree_height - measures height of tree
 * @tree: pointer to root of tree
 *
 * Return: height of tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lsum;
	size_t rsum;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	lsum = binary_tree_height(tree->left);
	rsum = binary_tree_height(tree->right);
	if (lsum > rsum)
		return (lsum + 1);
	return (rsum + 1);
}

/**
 * pow - calculates the power of one number to another
 * @a: base number
 * @b: power
 *
 * Return: a^b
 */
size_t _pow(size_t a, size_t b)
{
	size_t i;
	size_t ans;

	for (i = 0, ans = 1; i < b; i++)
		ans *= a;
	return (ans);
}
