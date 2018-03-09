#include "binary_trees.h"

/**
 * avl_remove - remove a node from an AVL tree
 * @root: pointer to root of tree
 * @value: value to remove
 *
 * Return: pointer to new root
 */
avl_t *avl_remove(avl_t *root, int value)
{
	avl_t *node;
	avl_t *rem; /* node to remove */

	if (root == NULL)
		return (NULL);
	if (root->n == value)
		rem = root;
	else
		rem = bst_search(root, value);
	if (rem == NULL)
		return (NULL);
	node = find_successor(rem->right);
	if (node == NULL)
	{
		node = rem->left;
		node->parent = rem->parent;
		if (rem->parent != NULL)
			rem->parent->right = node;
		free(rem);
		return (root);
	}
	node->parent->left = node->right;
	node->right = rem->right;
	node->parent = rem->parent;
	node->right->parent = node;
	node->left = rem->left;
	if (rem->parent != NULL)
		rem->parent->left = node;
	else
		root = node;
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
