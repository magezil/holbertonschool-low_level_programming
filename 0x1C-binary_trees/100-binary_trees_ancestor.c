#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 *
 * Return: pointer to lowest common ancestor or NULL if fail
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second || first->parent == second || first == second->parent)
		return ((binary_tree_t *)first);
	return (binary_trees_ancestor(first->parent, second->parent));
}
