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
	return (check_perfect(tree, binary_tree_height(tree), 0));
}

/**
 * check_perfect - recursively checks if binary tree is perfect
 * @tree: pointer to root of tree
 * @height: height of tree
 * @level: current level
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int check_perfect(const binary_tree_t *tree, size_t height, size_t level)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
			return (level + 1 == height);
		if (!binary_tree_is_leaf(tree->left) && !binary_tree_is_leaf(tree->right))
			return (check_perfect(tree->left, height, level + 1) &&
					check_perfect(tree->right, height, level + 1));
	}
	return (0);
}

/**
 * binary_tree_is_leaf - Checks if given node is a leaf
 * @node: node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right != NULL || node->left != NULL)
		return (0);
	return (1);
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
