#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: Height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_ = 0, right_ = 0;

	if (tree)
	{
		left_ = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_ = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left_ > right_) ? left_ : right_);
	}
	return (0);
}
