#include "binary_trees.h"

/**
 * binary_tree_insert_right - create a new node and insert as right-child
 * @parent: pointer to parent node
 * @value: value of new node
 *
 * Return: pointer to new node, or NULL if fail or no parent
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right != NULL)
		new->right->parent = new;
	return (new);
}
