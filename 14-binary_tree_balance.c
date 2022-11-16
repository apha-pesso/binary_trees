#include "binary_trees.h"

/**
 * binary_tree_balance- measures the balance factor of a binary tree
 * @tree: Pointer to the root node
 * Return: return the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		int l_height = 0, r_height = 0;

		if (tree->right)
			r_height = 1 + binary_tree_height(tree->right);
		if (tree->left)
			l_height = 1 + binary_tree_height(tree->left);
		return (l_height - r_height);
	}
	return (0);
}
