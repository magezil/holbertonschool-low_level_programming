#include "binary_trees.h"
/**
 * binary_tree_insert_left - create a new node adn insert as left-child
 * @parent: pointer to the parent node
 * @value: value of new node
 *
 * Return: pointer to new node, or NULL if fail or no parent
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = parent->left;
	parent->left = new;
	new->right = NULL;
	return (new);
}
