#include "binary_trees.h"

/**
 * binary_tree_preorder - use pre-order traversal to use given function
 * on nodes
 * @tree: pointer to root of tree
 * @func: pointer to function to use on ndoes
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
