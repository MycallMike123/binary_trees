#include "binary_trees.h"

int is_bst_util(const binary_tree_t *tree, int min, int max);

/**
 * is_bst_util - Helper function to check if a binary tree is a valid BST
 * @tree: Pointer to the root node of the subtree to check
 * @min: Minimum value that the nodes in the subtree can have
 * @max: Maximum value that the nodes in the subtree can have
 * Return: 1 if the subtree rooted at 'tree' is a valid BST, 0 otherwise
 */

int is_bst_util(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
	{
		return (1);
	}

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (is_bst_util(tree->left, min, tree->n) &&
		is_bst_util(tree->right, tree->n, max));
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if 'tree' is a valid BST, 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	return is_bst_util(tree, INT_MIN, INT_MAX);
}
