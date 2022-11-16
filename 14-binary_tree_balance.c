#include "binary_trees.h"


/**
 * binary_tree_height- Compute the height of a binary tree
 * @tree: pointer to the root node
 * Return: return height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

	if (tree->left)
	{
		l = 1 + binary_tree_height(tree->left);
	}
	else
		l = 0;

	r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((l > r) ? l : r);
	}
	return (0);
}


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
