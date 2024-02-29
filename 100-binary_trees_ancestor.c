#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node,
 *         or NULL if no common ancestor is found
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *ancestor;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}

	ancestor = first;
	while (ancestor != NULL)
	{
		if (binary_tree_is_descendant(ancestor, second))
		{
			return ((binary_tree_t *)ancestor);
		}
		ancestor = ancestor->parent;
	}

	return (NULL);
}

/**
 * binary_tree_is_descendant - Checks if a node is a descendant of another node
 * @ancestor: Pointer to the potential ancestor node
 * @descendant: Pointer to the potential descendant node
 * Return: 1 if descendant is a descendant of ancestor, otherwise 0
 */

int binary_tree_is_descendant(const binary_tree_t *ancestor,
				const binary_tree_t *descendant)
{
	while (descendant != NULL)
	{
		if (descendant == ancestor)
			return (1);
		descendant = descendant->parent;
	}

	return (0);
}
