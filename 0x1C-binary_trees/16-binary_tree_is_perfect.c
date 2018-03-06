#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root of tree
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int flag;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
			return (1);
		if (!binary_tree_is_leaf(tree->left) && !binary_tree_is_leaf(tree->right))
		{
			flag = binary_tree_is_perfect(tree->left);
			flag = flag && binary_tree_is_perfect(tree->right);
			return (flag);
		}
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
