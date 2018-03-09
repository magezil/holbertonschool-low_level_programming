#include "binary_trees.h"
#include <stdio.h>

/**
 * heap_insert - insert a node into a max binary heap
 * @root: double pointer to root of heap
 * @value: value to add to heap
 *
 * Return: pointer to new node, or NULL if fail
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *new, *parent;

	if (root == NULL)
		return (NULL);
	if (*root == NULL)
	{
		*root = binary_tree_node(*root, value);
		return (*root);
	}
	if (value == (*root)->n)
		return (NULL);
	if (value > (*root)->n)
	{
		parent = (*root)->parent;
		if (binary_tree_is_full((*root)->left) &&
				!binary_tree_is_full((*root)->right))
		{
			if ((*root)->right == NULL)
			{
				new = binary_tree_node(parent, value);
				(*root)->parent = new;
				new->right = *root;
				*root = new;
				return (new);
			}
			printf("add to right!\n");
			new = binary_tree_node(parent, value);
			new->right = (*root);
			(*root)->parent = new;
			new->left = (*root)->left;
			new->left->parent = new;
			(*root)->left = (*root)->right->left;
			(*root)->right->left = NULL;
			if ((*root)->left != NULL)
				(*root)->left->parent = (*root);
			*root = new;
			return (new);
		}
		else
		{
			if ((*root)->left == NULL)
			{
				new = binary_tree_node(parent, value);
				(*root)->parent = new;
				new->left = *root;
				*root = new;
				return (new);
			}
			printf("add to left!\n");
			new = binary_tree_node(parent, value);
			new->left = (*root);
			new->right = (*root)->right;
			(*root)->right->parent = new;
			(*root)->parent = new;
			(*root)->right = (*root)->left->right;
			if ((*root)->right != NULL)
				(*root)->right->parent = (*root);
			*root = new;
			return (new);
		}
	}
	printf("Recursion! :O\n");
	if (!binary_tree_is_perfect(*root) && binary_tree_is_full((*root)->left))
		return (heap_insert(&((*root)->right), value));
	else
		return (heap_insert(&((*root)->left), value));
}


/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to root of tree
 *
 * Return: 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (tree->right != NULL && tree->left != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root of tree
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t num_nodes, i;

	if (tree == NULL)
		return (0);
	for (i = 0, num_nodes = 1; i <= binary_tree_height(tree); i++)
		num_nodes *= 2;
	return (binary_tree_size(tree) + 1 == num_nodes);
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
