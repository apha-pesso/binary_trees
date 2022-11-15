#include "binary_trees.h"

/**
 * binary_tree_leaves- counts the number of leaves
 * @tree: pointer to the root node
 * Return: return number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
		size_t l_leaf = 0, r_leaf = 0;

		if ((tree->left == NULL) && (tree->right == NULL))
			return (1);
		l_leaf = binary_tree_leaves(tree->left);
		r_leaf = binary_tree_leaves(tree->right);
		return (l_leaf + r_leaf);
	}
}
