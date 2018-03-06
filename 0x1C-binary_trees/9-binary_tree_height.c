#include "binary_trees.h"

/**
 * binary_tree_height - measures height of tree
 * @tree: root of tree
 *
 * Return: height of tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lsum;
	size_t rsum;
	size_t sum;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	sum = 0;
	lsum = binary_tree_height(tree->left);
	rsum = binary_tree_height(tree->right);
	if (lsum > rsum)
		sum = lsum + 1;
	else
		sum = rsum + 1;
	
	return (sum);
}
