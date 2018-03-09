#include "binary_trees.h"

/**
 * bst_remove - removes a node from a BST
 * @root: pointer to root of tree
 * @value: value to remove from tree
 *
 * Return: new root of tree once value is removed, or NULL if fail
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *node;
	bst_t *rem; /* node to remove */

	if (root == NULL)
		return (NULL);
	if (root->n == value)
	{
		node = find_successor(root->right);
		if (node == NULL)
			return (NULL);
		node->parent->left = node->right;
		node->right = node->parent;
		node->right->parent = node;
		node->parent = NULL;
		node->left = root->left;
		if (root->left != NULL)
			root->left->parent = node;
		free(root);
		return (node);
	}
	rem = bst_search(root, value);
	if (rem == NULL)
		return (NULL);
	node = find_successor(rem->right);
	if (node == NULL)
	{
		node = rem->left;
		node->parent = rem->parent;
		rem->parent->right = node;
		free(rem);
		return (root);
	}
	node->parent->left = node->right;
	node->right = node->parent;
	node->parent = rem->parent;
	node->right->parent = node;
	node->left = rem->left;
	rem->parent->left = node;
	if (rem->left != NULL)
		rem->left->parent = node;
	free(rem);
	return (root);
}

/**
 * find_successor - finds first in-order successor
 * @root: pointer to root of tree
 *
 * Return: pointer to successor, or NULL if fail
 */
bst_t *find_successor(bst_t *root)
{
	if (root == NULL)
		return (NULL);
	if (root->left == NULL)
		return (root);
	return (find_successor(root->left));
}

/**
 * bst_search - search for value in a BST
 * @tree: pointer to root of tree
 * @value: value to search for
 *
 * Return: pointer to node if found, NULL otherwise
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL || tree->n == value)
		return ((bst_t *)tree);
	if (value < tree->n)
		return (bst_search(tree->left, value));
	if (value > tree->n)
		return (bst_search(tree->right, value));
	return (NULL);
}
