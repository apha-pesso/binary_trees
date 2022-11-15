#include "binary_trees.h"

/**
 * binary_tree_size- Measures the size of a binary tree
 * @tree: address of the root node
 * Return: return size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t l_size = 0, r_size = 0;

	l_size = tree->left ? binary_tree_size(tree->left) : 0;
	r_size = tree->right ? binary_tree_size(tree->right) : 0;
	return (l_size + r_size + 1);
}
